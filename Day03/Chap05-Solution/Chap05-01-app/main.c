#include <stdio.h>


int main(void) {

	int a = 10, b = 0;
	if (a > 10) {
		b = a;
	}
	else
		b = 1000;

	if (a > 0)
	{
		b = 1;
	}
	else if (a == 0)
	{
		b = 2;
	}
	else
		b = 3;
	printf("%d %d\n", a, b);


	return 0;
}