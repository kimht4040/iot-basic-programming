#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>




int main() {

	FILE* bfp, *tfp;
	int num = 67;
	int res;

	tfp = fopen("text.txt", "wt");
	fprintf(tfp, "%d", num);

	bfp = fopen("binary.dat", "wb");
	fwrite(&num, sizeof(num), 1, bfp);
	fclose(tfp);
	fclose(bfp);
	bfp = fopen("binary.dat", "rb");
	fread(&res, sizeof(res), 1, bfp);
	printf("%d", res);

	fclose(bfp);





	return 0;
}