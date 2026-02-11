#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct student {
	int num;

	double grade;
};

typedef struct student student;
void print_data(student*);

int main() {

	student st1;
	st1.grade = 3.14;
	st1.num = 201910792;

	print_data(&st1);


	return 0;
}


void print_data(student* ps) {
	printf("%d\n", ps->num);
	printf("%0.1f\n", ps->grade);
}


