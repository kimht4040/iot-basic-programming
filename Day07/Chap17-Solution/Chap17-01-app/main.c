#include <stdio.h>

struct student {
	int num;
	double grade;
} st1;


int main() {

	st1.num = 2;
	st1.grade = 3.5;
	printf("학번 %d 성적 %.1f", st1.num, st1.grade);


	return 0;
}