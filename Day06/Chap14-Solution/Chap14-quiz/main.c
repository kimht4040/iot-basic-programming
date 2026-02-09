//14장 3번 퀴즈
#include <stdio.h>



int main() {
	char mark[5][5] = { 0 };
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			if (i==0 || i==4 || j==0||j==4) {
				mark[i][j] = 'X';
			}

		}
	
	}

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			if (mark[i][j] == 0) {
				printf("[ ]");
			}
			else
				printf("[%c]", mark[i][j]);

		}
		printf("\n");
	}
	
	return 0;
}