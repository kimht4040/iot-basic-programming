#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

static void print_menu() {
	puts("==================================================");
	puts("              주소록 프로그램 (STEP 1)            ");
	puts("==================================================");
	printf("기능\n1.추가\n2.목록\n3.수정\n4.삭제\n5.검색\n");
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
static void add_adress() {
	FILE* fp = fopen("adress.txt", "w");
	
}


int main() {
	int choice;
	
	
	while (1) {
		print_menu();
		choice = read_menu();
		switch (choice) {
		case 1:
			printf("연락처 추가\n");
			break;
		case 2:
			printf("연락처 목록\n");
			break;
		case 3:
			printf("연락처 수정\n");
			break;
		case 4:
			printf("연락처 삭제\n");
			break;
		case 5:
			printf("연락처 검색\n");
			break;
		case 6:
			printf("종료\n");
			break;
		default:
			printf("1 ~ 6사이에 선택\n");
		}


	}



	return 0;
}