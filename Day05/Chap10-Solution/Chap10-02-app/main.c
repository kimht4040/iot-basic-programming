#include <stdio.h>



int main() {
	int arr[3] = { 0 };
	int* parr = arr;

	printf("배열의 크기 : %zu\n", sizeof(arr));
	printf("배열의 크기 : %zu\n", sizeof(parr));

	for (int i = 0; i < 3; i++) {
		printf("%3d", *(parr + i));
	}


	return 0;

}