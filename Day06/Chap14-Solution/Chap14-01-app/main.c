#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main() {
	

	//int score[3][4];

	int score[3][4] = {//초기화하기
		{1,2,3,4},
		{5,6,7,8},
		{9,10,11,12}
	};
	int total;
	double avg;
	for (int i = 0; i < 3; i++) {
		printf("%d 번학생 성적\n", i);
		for (int j = 0; j < 4; j++) {
			scanf("%d", &score[i][j]);
		}
	}

	for (int i = 0; i < 3; i++) {
		total = 0;
		for (int j = 0; j < 4; j++) {
			total += score[i][j];

		}
		avg = total / 4;


		printf("%d번 학생, 평균: %f\n", i, avg);
	}

	char animal[5][20];
	int count;
	count = sizeof(animal) / sizeof(animal[0]);
	printf("동물 이름 입력\n");
	for (int i = 0; i < 5; i++) {
		scanf("%s", animal[i]);
	}

	for (int i = 0; i < 5; i++) {
		printf("%s\n", animal[i]);
	}




	return 0;

}