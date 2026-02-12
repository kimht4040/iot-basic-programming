
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

extern int count;
int total;

int input_data(void) {

	printf("input %zu\n", &total);
	int pos;
	while (1) {
		printf("양수 입력: ");
		scanf("%d", &pos);

		if (pos <= 0) {
			break;
		}
		count++;
		total += pos;
		printf("%d\n", total);
	}
	return total;

}

