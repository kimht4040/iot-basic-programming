#include <stdio.h>

int add_ten(int num) {
	num = num + 10;
	return num;
}
void plus_ten(int* num) {

	*num = *num + 10;
}

int* sum(int a , int b) {
	static int res;
	res = a + b;

	return &res;
}

int main() {
	
	int a = 100;
	int b = 200;
	a = add_ten(a);
	printf("a = %d\n", a);
	plus_ten(&a);
	printf("a = %d\n", a);
	
	int* result = sum(a, b);
	printf("a+b = %d \n", *result);
	return 0;
}