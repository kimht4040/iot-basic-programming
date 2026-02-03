//연산자
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a = 10, b = 3;
	int sum, sub, mul, mod;
	double div;
	
	sum = a + b;//덧셈
	sub = a - b;//뺄셈
	mul = a * b;//곱셈
	div = (double)(a / b);//나눗셈, 실수로 형변환 해야함
	mod = a % b;//나머지
	printf("a = %d, b = %d\n", a, b);
	printf("a + b = %d\n", sum);
	printf("a - b = %d\n", sub);
	printf("a * b = %d\n", mul);
	printf("a ÷ b = %.f\n", div);
	printf("a mod b = %d\n", mod);

	printf("%d\n", a++);
	printf("%d", a);


	return 0;
}
