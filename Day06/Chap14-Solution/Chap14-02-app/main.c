#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>





int main() {

	char* panimal[5];
	
	panimal[0] = "강아지";
	panimal[1] = "고양이";
	panimal[2] = "앵무새";
	panimal[3] = "사자";
	panimal[4] = "긴꼬리원숭이";


	for (int i = 0; i < 5; i++) {
		printf("%s\n", panimal[i]);
	}
	




	return 0;
}