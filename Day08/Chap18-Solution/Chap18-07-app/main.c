#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main() {

	FILE* fp = fopen("hello word!.txt", "r");
	if (fp == NULL) {
		printf("파일 오픈 실패\n");
		return 1;
	}

	printf("열림\n");


	
	fclose(fp);




	return 0;
}