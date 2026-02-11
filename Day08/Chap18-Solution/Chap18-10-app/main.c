#include <stdio.h>
#pragma pack(1)
struct student
{
	//변수 선언시 변수 선언 순서를 잘 지켜야 패딩 바이트가 최소화됨
	int num;

	double grade;
};






int main() {


	struct student st1;


	printf("%zu", sizeof(st1));



	return 0;
}