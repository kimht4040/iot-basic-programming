#define _CRT_SECURE_NO_WARNINGS


#include <stdio.h>

int main() {

	//정수값 
	int input_val;
	printf("숫자를 입력하세요:");
	scanf("%d", &input_val);


	printf("%d\n", input_val);
	int age;
	float height;

	//두개의 데이터
	printf("나이와 키를 입력하세요 : ");
	scanf("%d%f", &age, &height);
	printf("나이는 %d살 키는 %0.1fcm입니다.\n", age, height);

	//문자열 입력

	char name[20];
	char grade;


	printf("학점입력: ");
	scanf(" %c", &grade);

	printf("이름을 입력하세요: ");
	scanf(" %s", name);//배열의 이름만 적으면 배열의 주소를 나타냄

	
	printf("학점은 %c 이름은 %s입니다. ", grade, name);



	return 0;

}