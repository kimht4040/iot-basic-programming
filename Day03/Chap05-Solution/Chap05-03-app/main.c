#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>



int main(void) {
	
	//while 문
	int a = 1;
	while (a < 10) {

		a = a * 2;
	}
	printf("a의 값은 %d\n", a);
	a = 0;
	while(a<=10){
		printf("%10d", a++);
	}
	printf("\n");

	a = 0;
	do {
		printf("do~while실행\n");
		a--;
	} while (a > 0);
	printf("do~while종료\n");


	return 0;
}