#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

#define MAX_CONTRACTS 100
#define NAME_LEN 31
#define PHONE_LEN 21
#define EMAIL_LEN 65
#define ADDR_LEN 129
#define MEMO_LEN 129

typedef struct _contact {
	char name[NAME_LEN];
	char phone[PHONE_LEN];
	char email[EMAIL_LEN];
	char address[ADDR_LEN];
	char memo[MEMO_LEN];
} Contact;
void clear_screen();
static Contact contacts[MAX_CONTRACTS];
static int count = 0;
static void read_line(char* buf, int size);
static void add_contact();
static void print_menu();
static int read_menu();
static void list_contacts();
static void serch_name();
static void update();
static void del();
static void save();
static void load();

int main() {
	int choice;


	while (1) {

		print_menu();
		choice = read_menu();
		switch (choice) {
		case 1:
			add_contact();
			break;
		case 2:
			list_contacts();
			break;
		case 3:
			update();
			break;
		case 4:
			del();
			break;
		case 5:
			serch_name();
			break;
		case 6:
			save();
			break;
		case 7:
			load();
			break;
		case 8:
			printf("종료\n");
			exit(1);
			break;
		default:
			printf("1 ~ 8사이에 선택\n");
		}


	}



	return 0;
}
static void add_contact() {
	clear_screen();
	if (count >= MAX_CONTRACTS) {
		puts("주소록이 가득찼습니다.");
		return;
	}
	puts("새 연락처 입력");
	printf("이름 : ");
	read_line(contacts[count].name, NAME_LEN);
	printf("전화 : ");
	read_line(contacts[count].phone, PHONE_LEN);
	printf("주소 : ");
	read_line(contacts[count].address, ADDR_LEN);
	printf("이메일 : ");
	read_line(contacts[count].email, EMAIL_LEN);
	printf("메모 : ");
	read_line(contacts[count].memo, MEMO_LEN);
	count++;
	puts("추가완료");
}
static void read_line(char* buf, int size) {
	if (fgets(buf, size, stdin) == NULL) {
		buf[0] = '\0';
		return;
	}
	//strcspn(buf, "\n") => 버퍼의 위치에서 공백 위치 값을 리턴
	buf[strcspn(buf, "\n")] = '\0';

}
void clear_screen() {
	system("cls");
}
static void print_menu() {
	puts("==================================================");
	puts("              주소록 프로그램 (STEP 3)            ");
	puts("==================================================");
	printf("기능\n1.추가\n2.목록\n3.수정\n4.삭제\n5.검색\n6.저장\n7.불러오기\n8.종료\n");
}
static int read_menu() {
	int choice, ch;
	printf("선택 > ");
	if (scanf("%d", &choice) != 1) {

		while ((ch = getchar()) != '\n' && ch != EOF);
		return -1;
	}
	while ((ch = getchar()) != '\n' && ch != EOF);

	return choice;
}
static void list_contacts() {
	clear_screen();
	if (count == 0) {
		printf("저장된 연락처 없음\n");
		return;
	}
	puts("연락처 목록");
	puts("--------------------------------------------------------------------");
	printf("개수: %d\n", count);
	printf("%4s | %10s | %15s | %25s | %30s\n",
		"No", "Name", "Phone", "Email", "Address");
	puts("--------------------------------------------------------------------");
	for (int i = 0; i < count; i++) {
		printf("%4d | %10s | %15s | %25s | %30s\n",
			i + 1, contacts[i].name, contacts[i].phone, contacts[i].email, contacts[i].address);
	}

}
static void serch_name() {
	clear_screen();
	char serch[20];
	if (count == 0) {
		printf("저장된 연락처 없음\n");
		return;
	}
	printf("이름 입력 : ");
	scanf("%s", serch);

	size_t len = strlen(serch);
	puts("연락처 목록");
	puts("--------------------------------------------------------------------");
	printf("개수: %d\n", count);
	printf("%4s | %10s | %15s | %25s | %30s\n",
		"No", "Name", "Phone", "Email", "Address");
	puts("--------------------------------------------------------------------");
	for (int i = 0; i < count; i++) {
		if (strncmp(serch, contacts[i].name, len) == 0) {
			printf("%4d | %10s | %15s | %25s | %30s\n",
				i + 1, contacts[i].name, contacts[i].phone, contacts[i].email, contacts[i].address);
		}

	}

}
static void update() {
	clear_screen();
	int num;
	int num2;
	if (count == 0) {
		printf("저장된 연락처 없음\n");
		return;
	}
	puts("연락처 목록");
	puts("--------------------------------------------------------------------");
	printf("개수: %d\n", count);
	printf("%4s | %10s | %15s | %25s | %30s\n",
		"No", "Name", "Phone", "Email", "Address");
	puts("--------------------------------------------------------------------");
	for (int i = 0; i < count; i++) {
		printf("%4d | %10s | %15s | %25s | %30s\n",
			i + 1, contacts[i].name, contacts[i].phone, contacts[i].email, contacts[i].address);
	}
	printf("수정을 원하는 사람의 번호를 입력하세요 : ");
	scanf("%d", &num);
	clear_screen();
	while (getchar() != '\n');
	printf("수정을 원하는 항목을 선택하세요\n");
	printf("%s %s %s %s %s 6. return \n",
		"1. Name", "2. Phone", "3. Address", "4. Email", "5. memo");
	scanf("%d", &num2);
	clear_screen();
	while (getchar() != '\n');
	switch (num2) {
	case 1:
		printf("이름 : ");
		read_line(contacts[num - 1].name, NAME_LEN);
		break;
	case 2:
		printf("전화 : ");
		read_line(contacts[num - 1].phone, PHONE_LEN);
		break;
	case 3:
		printf("주소 : ");
		read_line(contacts[num - 1].address, ADDR_LEN);
		break;
	case 4:
		printf("이메일 : ");
		read_line(contacts[num - 1].email, EMAIL_LEN);
		break;
	case 5:
		printf("메모 : ");
		read_line(contacts[num - 1].memo, MEMO_LEN);
		break;

	}
}
static void del() {
	clear_screen();
	int num;
	if (count == 0) {
		printf("저장된 연락처 없음\n");
		return;
	}
	puts("연락처 목록");
	puts("--------------------------------------------------------------------");
	printf("개수: %d\n", count);
	printf("%4s | %10s | %15s | %25s | %30s\n",
		"No", "Name", "Phone", "Email", "Address");
	puts("--------------------------------------------------------------------");
	for (int i = 0; i < count; i++) {
		printf("%4d | %10s | %15s | %25s | %30s\n",
			i + 1, contacts[i].name, contacts[i].phone, contacts[i].email, contacts[i].address);
	}
	printf("삭제를 원하는 사람의 번호를 입력하세요 : ");
	scanf("%d", &num);
	for (int i = num - 1; i < count-1; i++) {
		contacts[i] = contacts[i + 1];
	}
	count--;
	printf("삭제완료\n");

}
static void save() {
	system("cls");
	clear_screen();
	if (count == 0) {
		printf("저장된 연락처 없음\n");
		return;
	}
	FILE* fp = fopen("address.txt", "w");
	for (int i = 0; i < count; i++) {
		fprintf(fp, "%d %s %s %s %s %s\n",
			i + 1, contacts[i].name, contacts[i].phone,
			contacts[i].email, contacts[i].address, contacts[i].memo);
	}
	puts("address.txt 파일에 저장완료");
	Sleep(1000);
	system("cls");
	fclose(fp);


	
}
static void load() {
	system("cls");
	FILE* fp = fopen("address.txt", "r");
	if (fp == NULL) {
		puts("파일이 없거나 열 수 없습니다.");
		return; // 파일이 없으면 함수 종료
	}
	char temp[5];
	count = 0;
	while (fscanf(fp, "%d %s %s %s %s %s",
		temp, contacts[count].name, contacts[count].phone, contacts[count].email,
		contacts[count].address, contacts[count].memo)==6) {
		count++;
	}
	puts("address.txt 파일에서 불러오기 완료");
	fclose(fp);
}