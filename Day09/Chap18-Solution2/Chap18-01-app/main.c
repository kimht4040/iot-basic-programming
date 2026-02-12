#define _CRT_SECURE_NO_WARNINGS


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <direct.h>


int main() {


	char cwd[256];
	char* res;
	char str[80];
	_getcwd(cwd, sizeof(cwd));
	printf("현재 폴더 %s\n", cwd);
	FILE* ofp;
	FILE* fp = fopen("sample.txt", "r");
	if (fp == NULL) {
		return 1;
	}
	else
		printf("성공\n");




	ofp = fopen("copy.txt", "w");
	if (ofp == NULL) {
		return 1;
	}
	else
		printf("성공\n");

	while (1) {
		res = fgets(str, sizeof(str), fp);
		if (res == NULL) {
			break;
		}
		printf("한줄 쓰기: %s\n", str);
		str[strlen(str) - 1] = "\0";
		fputs(str, ofp);
		fputs(" ", ofp);
	}




	fclose(ofp);
	fclose(fp);
	return 0;
}