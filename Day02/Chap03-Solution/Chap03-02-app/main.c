#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <float.h>//실수형 표현을 위한 라이브러리
#include <string.h>//문자열 표햔을 위한 라이브러리
int main()
{
	printf("변수 float, %zu bytes, 최소 %e, 최대 %e\n", sizeof(float), FLT_MIN, FLT_MAX);

	//문자열: 문자의 배열


	char fruit[20] = "strawbrerry";
	printf("과일이름 : %s", &fruit);

	strcpy(fruit, "banana");//함수를 써서 변수값을 변경


	printf("변경 과일이름 : %s", &fruit);



    return 0;
}
