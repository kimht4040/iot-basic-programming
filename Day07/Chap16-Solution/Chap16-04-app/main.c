//동적할당
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main() {

	char temp[80];
	char* str[3]; //동적 할당할 포인터 배열

	for (int i = 0; i < 3; i++) {
		printf("문자열 입력 : ");
		gets(temp);
		//printf("입력한 문자열 : %s\n", temp);
		str[i] = (char*)malloc(strlen(temp) + 1);
		strcpy(str[i], temp);

	}
	for (int i = 0; i < 3; i++) {
		printf("%s\n", str[i]);
		free(str[i]);
		
	}
	


	return 0;
}