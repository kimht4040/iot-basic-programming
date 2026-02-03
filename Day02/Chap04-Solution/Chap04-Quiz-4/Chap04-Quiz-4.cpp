#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	double weight = 0;
	double height = 0;

	printf("몸무게(kg)와 키(cm) 입력 : ");
	scanf("%lf%lf", &weight, &height);
	height = height / 100;
	double bmi = (weight / (height * height));
	printf("%s", (25>bmi && bmi>20) ? "표준입니다." : "관리가 필요합니다.");



	return 0;
}