#define _CRT_SECURE_NO_WARNINGS


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <direct.h>

int main() {

	char name[20];
	int kor, eng, math;
	int total;
	double avg;
	int res;
	char buffer[20];
	FILE* fp = fopen("original.txt", "r");
	if (fp == NULL) {
		return 1;
	}
	FILE* ofp = fopen("copy.txt", "w");
	if (ofp == NULL) {
		return 1;
	}

	while (1) {
		res = fscanf(fp, "%s %d %d %d", name, &kor, &eng, &math);
		if (res == EOF) {
			break;
		}
		total = kor + eng + math;
		avg = total / 3;
		
		printf("%s %d %.2f\n", name, total, avg);
		fprintf(ofp, "%s %d %.1f\n", name, total, avg);
	}




	fclose(ofp);
	fclose(fp);
	return 0;
}