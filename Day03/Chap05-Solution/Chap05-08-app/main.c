#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>



int main() {
	/*for (int i = 0; i < 5; i++) {
		for (int j = 0; j <5; j++) {
			printf("*");
		}
		printf("\n");
	}
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}*/
	for (int i = 0; i < 3; i++) {
		for(int j = 0;  j < 5; j++){
			if (j - i == 0 || i + j == 4)
			{
				printf("*");
			}
			else
				printf(" ");
			
		}
		printf("\n");
	}
	for (int i = 1; i >= 0; i--) {
		for (int j = 4; j >= 0; j--) {
			if (j - i == 0 || i + j == 4)
			{
				printf("*");
			}
			else
				printf(" ");

		}
		printf("\n");
	}
	


	return 0;
}