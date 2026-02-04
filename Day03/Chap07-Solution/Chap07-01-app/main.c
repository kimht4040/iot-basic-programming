#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>


int sum (int a, int b) {
	return a + b;
}



int main() {
	int a, b;
	printf("숫자를 입력하세요 : ");
	scanf("%d %d", &a, &b);


	int result = sum(a, b);
	//리턴이 있는 함수를 호출하면 반드시 리턴값을 받을 변수가 있어야함
	
	printf("%d", result);
	return 0;
}