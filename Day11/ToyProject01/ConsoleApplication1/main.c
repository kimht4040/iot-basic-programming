#include <stdio.h>



int main() {
	int a = 1;
	int b = 2;

	int* p = &a;
	int** pp = &p;


	* pp = &b;
	**pp = 3;

	printf("a: %d\n", b);








	return 0;
}