//함수포인터 활용
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void func(int (*fp)(int, int)) {
	int x, y;
	printf("\n두 숫자를 입력하세요: ");
	scanf("%d %d", &x, &y);

	int result = fp(x, y);
	printf("결과: %d\n", result);

}
int sum(int x, int y) {
	return x + y;
}
int mul(int x, int y) {
	return x * y;
}
int max(int x, int y) {
	return x >= y ? x : y;
}


int main() {


	int sel;
	printf("01 sum\n");
	printf("02 mul\n");
	printf("03 max\n");
	printf("select calculation : ");
	scanf("%d", &sel);

	switch (sel) {
	case 1:
		func(sum);
		break;
	case 2:
		func(mul);
		break;
	case 3:
		func(max);
		break;
	}



	return 0;
}