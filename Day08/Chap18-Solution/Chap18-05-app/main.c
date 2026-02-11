#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//메모리 용량을 최적화하고 싶을 떄 사용 
//멤버변수끼리 데이터 충돌 발생 
enum season { SPRING, SUMMER, FALL, WINTER };



union student {
	int id;
	double grade;

};
int main() {

	union student st1 = { .id = 315, .grade = 4.4 };

	printf("공용체 크기 : %zu\n", sizeof(st1));

	st1.grade = 4.2;
	printf("학번 : %d\n", st1.id);
	printf("학번 : %.1f\n", st1.grade);
	enum season ss;//열거형 선언

	char* pc = NULL;

	ss = SUMMER;



	switch (ss) {
	case SPRING:
		pc = "inline";
		break;
	case SUMMER:
		pc = "swimming";
		break;
	case FALL:
		pc = "tracking";
		break;
	case WINTER:
		pc = "skiing";
		break;

	}

	printf("%s", pc);

	return 0;
}