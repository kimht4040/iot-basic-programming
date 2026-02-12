//메인 소스

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "main.h"




int main() {

	int a, b;
	double avg;
	input_data(&a, &b);
	avg = average(a, b);


	printf("%.2f\n", avg);


	return 0;
}
