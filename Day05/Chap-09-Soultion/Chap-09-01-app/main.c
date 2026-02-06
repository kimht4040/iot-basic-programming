#include <stdio.h>



int main() {

	int a = 10;


	int* p = &a;
	double* pd = p;


	//pd = p; 이런식으로 포인터 변수의 자료형과 넣는 주소의 자료형을 일치시켜야함




	printf("%d\n", *p);

	printf("%lf\n", *pd);


	double c = 3.14;
	int* pi;
	pd = &c;



	printf("%lf\n", *pd);
	pi = (int*)pd;

	printf("%d", *pi);











	return 0;
}