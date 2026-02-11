#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct profile {
	char name[20];
	int age;
	double height;
	char* intro;
};

struct student {
	int id;
	double grade;
	struct profile pf;
};

int main() {

	struct student st1;

	st1.id = 201910792;
	st1.grade = 3.43;
	st1.pf.age = 26;
	st1.pf.height = 180.0;
	st1.pf.intro = (char*)malloc(80);
	strcpy(st1.pf.name, "동길동");

	gets(st1.pf.intro);
	printf("이름 : %s\n", st1.pf.name);
	printf("학번 : %d\n", st1.id);
	printf("학점 : %.1f\n", st1.grade);
	printf("나이 : %d\n", st1.pf.age);
	printf("키 : %.1f\n", st1.pf.height);
	printf("자기소개 : %s\n", st1.pf.intro);
	
	free(st1.pf.intro);

	return 0;
}