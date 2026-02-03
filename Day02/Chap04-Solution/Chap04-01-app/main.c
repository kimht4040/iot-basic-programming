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
	printf("%d\n", a);

	int d = 10;
	int res;
	//false = 0; true = 1;
	res = (a > b);
	

	printf("a > b : %d\n", res);
	printf("a >= b : %d\n", a >= b);

	//논리 연산자
	// &&, ||, !

	res = (a > 10) && (b > 20);
	printf("(a > 10) && (b > 20) : %d\n", res);
	res = (a > 10) || (b < 20);
	printf("(a > 10) || (b < 20) : %d\n", res);
	res = !(b > 10);
	printf("!(b > 10) : %d\n", res);


	//형변환 연산자
	printf("%d\n", (int)3.141592);
	printf("%f\n", (float)3);

	//sizeof

	int g = 23;
	float h = 3.14;
	printf("int %d\n", sizeof(g));
	printf("int %llf\n", sizeof(h));


	//연산자 우선순위 
	//콤마 연산다 : 한 번에 여러 수식

	res = (++a, ++b);
	printf("%d %d\n", a, b);


	//삼항 연산자 참이면 왼쪽 아니면 오른쪽

	int i = 30, j = 25;
	printf("작은 값은 : %d\n", (i < j) ? i : j);

	//비트연산자
	a = 10; //00000000 0000000 0000000 00001010
	b = 12; //00000000 0000000 0000000 00001100





	printf("a & b : %d\n", (a & b));


	return 0;
}
