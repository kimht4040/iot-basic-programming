#include <stdio.h>
extern int count;

int total;

int average(void) {
	printf("avg %zu\n", &total);
	return total / (double)count;
}