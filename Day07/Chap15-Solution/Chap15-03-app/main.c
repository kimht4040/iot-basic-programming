//보이드 포인터
#include <stdio.h>


int main() {
    
	int a = 10;
	double b = 3.5;

	void* vp;
	int* pi = (int*)vp; //대입연산에서는 형변환을 안써도 오류없음 , 하지만 명시적으로 형변환 추가해주기
	int* pa;
	double* pb;

	vp = &a;

	printf("a : %d\n", *(int*)vp);
	vp = &b;
	printf("b : %.2f\n", *(double*)vp);
	
	pa = &b; //에러 발생
	printf("b : %.2f\n", *pa);


	return 0;
}