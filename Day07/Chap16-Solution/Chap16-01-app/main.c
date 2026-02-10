//메모리 동적 할당

#include <stdio.h>
#include <stdlib.h> //malloc, free 함수가 선언된 헤더 파일


int main() {

	int* pi;
	double* pd;


	pi = (int*)malloc(sizeof(int)); // 메모리 동적할당 후 포인터 연결 4바이트
	if (pi == NULL) {
		printf("메모리가 부족합니다.\n");
		exit(1);// 1 리턴 후 프로그램 종료
	}
	pd = (double*)malloc(sizeof(double)); // 8바이트 생성
	*pi = 10;
	*pd = 3.4;


	printf("integer : %d\n", *pi);
	printf("real number : %f\n", *pd);

	free(pi);


	free(pd);




	return 0;
}