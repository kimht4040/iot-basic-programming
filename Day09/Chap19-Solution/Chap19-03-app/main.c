
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>



int input_data(void);
int average();
void print_data(double);

int count = 0;

static int total=0;



int main() {

	printf("main %zu\n", &total);
	double avg;
	total = input_data();
	printf("%d\n", total);
	avg = average();
	print_data(avg);



	return 0;
}

void print_data(double avg) {
	printf("입력 양수 개수 : %d\n", count);
	printf("평균 %.2f\n", avg);
}
