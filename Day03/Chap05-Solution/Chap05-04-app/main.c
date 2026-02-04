//for문
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main(void) {
	int a = 1;
	for (int i = 0; i < 3; i++) {
		a = a * 2;
	}
	printf("a : %d\n", a);
	for (int i = 0; i < 10; i++) {
		printf("$");
	}
	printf("\n");
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			printf("*");
		}
		printf("\n");
	}
	

	return 0;
}