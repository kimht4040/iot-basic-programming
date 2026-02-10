#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>	


int main() {
	int* pi = NULL;
	
	int size = 5;
	int count = 0;
	int num;
	// calloc: contigous allocation
	pi = (int*)calloc(size, sizeof(int));
	while (1) {
		printf("양수만 입력하세요 => ");
		scanf("%d", &num);
		if (num <= 0) {
			break;
		}
		if (count == size) {
			size += 1;
			//realloc : re - allocation (재할당)
			pi = (int*)realloc(pi, size * sizeof(int));
		}
		pi[count++] = num;

	}


	for (int i = 0; i < count; i++) {
		printf("%5d", pi[i]);
	}


	free(pi);




	return 0;
}