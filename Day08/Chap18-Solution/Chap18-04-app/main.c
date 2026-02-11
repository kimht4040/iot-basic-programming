#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct score {
	int kor;
	int eng;
	int math;
};

struct address {
	char name[20];
	int age;
	char tel[20];
	char addr[80];
};

//구조체 배열을 주소로 받아서 출력
void print_struct_list (struct address* lp) {
	for (int i = 0; i < 5; i++) {
		printf("%10s%5d%15s%20s\n", (lp+i)->name, (lp + i)->age, (lp + i)->tel, (lp + i)->addr);
	}
}

int main() {



	struct score yuni = { .kor = 90, .eng = 80, .math = 70 };
	struct score* ps = &yuni;



	printf("국어 : %d\n", (*ps).kor);
	printf("국어 : %d\n", ps -> kor); //(*ps) ==> ps-> 이렇게 단순화 해서 사용
	printf("영어 : %d\n", ps->eng);
	printf("수학 : %d\n", ps->math);

	struct address list[5] = {
		{"홍길동", 23, "111-111", "울릉도"},
		{"홍박사", 23, "121-111", "독도"},
		{"서진", 23, "114-111", "서울"},
		{"윤지서", 23, "121-311", "부산"},
		{"현서진", 23, "89-111", "진보"}
	};

	print_struct_list(list);



	return 0;
}