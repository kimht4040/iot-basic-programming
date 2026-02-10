//함수포인터
#include <stdio.h>

int sum(int x, int y) {
	return x + y;
}
int sub(int x, int y) {
	return x - y;
}

int mul(int x, int y) {
	return x * y;
}
int div(int x, int y) {
	return x / y;
}
int main() {

	int(*fp)(int, int);
	int res;
	fp = sum;//배열 같이 함수도 이름만 적으면 주소 전달됨



	res = fp(10, 20);
	printf("sum : %d\n", res);

	fp = sub;
	res = fp(20, 10);
	printf("sub : %d\n", res);

	fp = mul;
	res = fp(20, 10);
	printf("mul : %d\n", res);



	fp = div;
	res = fp(20, 10);
	printf("div : %d\n", res);


	return 0;
}