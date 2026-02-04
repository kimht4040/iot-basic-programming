//구구단
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main() {

	for (int i = 2; i < 10; i++) {
		printf("%d단 시작\n", i);
		printf("------------------------------------------------------------------------------------\n");
		for (int j = 1; j < 10; j++) {
			printf("%d x %d = %2d\t", i, j, i * j);
		}
		printf("\n");
		printf("\n");
	}

	return 0;
}