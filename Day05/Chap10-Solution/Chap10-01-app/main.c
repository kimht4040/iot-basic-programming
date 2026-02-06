#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//배열 포인터

int main() {

	int arr[3];
	int a = 2;
	int* p = &a;
	arr[0] = 10;
	arr[1] = 20;
	arr[2] = arr[0] + arr[1];
	for (int i = 0; i < 3; i++) {
		printf("%d\n", arr[i]);
	}

	printf("%zu\n", arr);
	printf("%zu\n", &arr[0]);

	//위 작업 포인터로
	
	for (int i = 0; i < 3; i++) {
		printf("%d\n", *(arr+i));
		
	}


	//키보드


	scanf("%d", arr+2);

	printf("%d", arr[2]);






	return 0;
}