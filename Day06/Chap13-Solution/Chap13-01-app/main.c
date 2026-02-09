#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>


int main() {

	char str1[80] = "strawberry";
	char str2[80] = "apple";
	char* ps1 = "banana";;
	char* ps2 = "str2";
#pragma region strcpy 함수
	printf("최초 : %s \n", str1);
	strcpy(str1, str2);
	printf("변경 후 : % s \n", str1);
	strcpy(str1, ps1);
	printf("변경 후 : % s \n", str1);
	strcpy(str1, ps2);
	printf("변경 후 : % s \n", str1);
	strcpy(str1, "banana");
	printf("변경 후 : % s \n", str1);
	//str2 = "apple" 문자 배열은 값 변경 불가해서 strcpy사용해야함
	ps2 = "apple";
#pragma endregion

#pragma region strncpy
	char str4[80] = "straw";
	strcat(str4, "berry");

	printf("바뀐 문자열 : %s\n", str4);

#pragma endregion


#pragma region strlen
	printf("strlen() 함수\n");
	printf("str1 : %s, 글자길이 : %zu \n", str1, strlen(str1));
	//한글 한글자당 c에서는 2바이트
#pragma endregion


#pragma region strcmp, strncmp

	char str5[80] = "pear";
	char str6[80] = "peach";



	if (strcmp(str5, str6) == 1) {
		printf("사전에 나중에 나오는 과일 : %s\n",str5);
	}
	else if (strcmp(str5, str6) == -1) {
		printf("사전에 먼저 나오는 과일 : %s\n", str5);
	}
	else
		printf("같은 과일");


#pragma endregion


	return 0;
}