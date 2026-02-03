#include <stdio.h>
#include <limits.h>
//변수
	

int main() {
	int a;//정수형 변수 a 선언
	int b, c;//정수형 변수 b, c 선언
	float f;//실수형 변수 f 선언
	double d;//배정도 실수형 변수 d 선언

	char ch;//문자형 변수 ch 선언


	a = 10;
	b = a;
	c = a + 20;
	f = 3.14f;
	d = 1.283019283098;
	printf("변수 a의 값%d\n", a);
	printf("변수 b의 값%d\n", b);
	printf("변수 c의 값%d\n", c);
	printf("변수 f의 값%.2f\n", f);
	printf("변수 d의 값%.10f\n", d);

	ch = 'a';
	printf("변수 ch의 값%d\n", ch);

	return 0;
}