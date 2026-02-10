//동적 배열 크기 할당
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


int main() {

	int* pi = NULL;
	int sum = 0;


	pi = (int*)malloc(5 * sizeof(int));
	if (pi == NULL) {
		exit(1);
	}

	printf("다섯명의 나이를 입력하세요");
	for (int i = 0; i < 5; i++) {
		scanf("%d", &pi[i]);
		sum += pi[i];
	}

	printf(" avg age : %.1f", (double)(sum / 5));

	free(pi);

	return 0;
}