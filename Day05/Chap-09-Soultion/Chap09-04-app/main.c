#include <stdio.h>



int main() {

	int a = 10, b = 15, total;


	double avg;
	int* pa, * pb;
	int* ptotal = &total;
	double* pg = &avg;


	pa = &a;
	pb = &b;

	*ptotal = *pa + *pb;
	*pg = (double)(*ptotal) / 2;

	printf("a = %d,b = %d, total = %d, avg = %.2f\n", a, b, total, avg);

	printf("*pa = %d, *pb = %d, *ptotal = %d, *pg = %.2f", *pa, *pb, *ptotal, *pg);

	// * : asterik or star
	// & : ampersand or and




	return 0;
}