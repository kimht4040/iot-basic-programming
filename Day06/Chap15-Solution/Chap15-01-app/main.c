#include <stdio.h>



int main() {
	int a = 10;
	int* pi;
	int** ppi;


	pi = &a;
	ppi = &a;
	printf("-------------------------------------------------------------\n");
	printf("변수      변수값      &연산       *연산       **연산\n");
	printf("------------------------------------------------------------\n");

	printf("  a%12d%12u\n", a, &a);
	printf(" pi%12u%12u%12d\n", pi, &pi, *pi);
	printf("ppi%12u%12u%12u%12d\n", ppi, &ppi, *ppi, **ppi);

	return 0;
}