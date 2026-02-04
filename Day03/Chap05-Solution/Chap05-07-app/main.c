//무한루프
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>



int main() {
	int i = 1;
	/*while (1) {
		printf("IF %d\n", i++);
	}*/
	

	while (1) {
		printf("happy\n");
		i++;
		if (i == 10) {
			break;
		}
	}



	return 0;
}