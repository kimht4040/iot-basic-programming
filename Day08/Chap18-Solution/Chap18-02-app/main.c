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

int main() {

	struct profile pf1;

	strcpy(pf1.name, "동길동");

	pf1.age = 26;
	pf1.height = 180.0;
	pf1.intro = (char*)malloc(80);
	printf("자기소개 : ");

	gets(pf1.intro);
	printf("출력");
	printf("이름 : %s\n", pf1.name);
	printf("나이 : %d\n", pf1.age);
	printf("키 : %.1f\n", pf1.height);
	printf("자기소개 : %s\n", pf1.intro);

	free(pf1.intro);

	return 0;
}