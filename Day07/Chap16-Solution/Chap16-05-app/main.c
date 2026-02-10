#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>



void print_str(char** ps) {
	while (*ps != NULL) {
		printf("%s\n", *ps);
		ps++;

	}
}
void print_str2(char** ps, int count) {
	int i;
	for (i = 0; i < count; i++) {
		printf("# %s\n", *(ps + i));
	}
}

int main() {
	
	char temp[81];
	char* str[21] = { 0 };
	int i = 0;
	while (i < 20) {

		printf("문자열 입력 : ");
		gets(temp);

		if (strcmp(temp, "end") == 0) {
			break;
		}
		str[i] = (char*)malloc(strlen(temp) + 1);
		strcpy(str[i], temp);
		i++;

	}

	print_str(str);
	print_str2(str, i);
	for (i = 0; str[i] != NULL; i++) {
		free(str[i]);
	}



	return 0;
}