#define _CRT_SECURE_NO_WARNINGS


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <direct.h>


int main()
{
	char str[20];
	FILE* fp = fopen("test.txt", "a+");
	if (fp == NULL) {
		return 1;
	}
	while (1) {
		printf("과일이름 입력 : ");
		scanf("%s", str);
		if (strcmp(str, "end") == 0) {
			break;
		}
		else if (strcmp(str, "list")==0) {
			fseek(fp, 0, SEEK_SET);
			while (1) {
				fgets(str, sizeof(str), fp);
				if (feof(fp)) {
					break;
				}
				printf("%s", str);
			}

		}
		else
			fprintf(fp, "%s\n", str);

		fflush(fp);

	}




	fclose(fp);


	return 0;
}