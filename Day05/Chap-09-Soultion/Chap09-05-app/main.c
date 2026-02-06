#include <stdio.h>


int main() {

	char ch;

	int in;
	double db;

	char* pch = &ch;
	int* pin = &in;
	double* pdb = &db;





	printf("char형 변수 주소 크기 : %zu 바이트\n", sizeof(&ch));
	printf("int형 변수 주소 크기 : %zu 바이트\n", sizeof(&in));
	printf("double형 변수 주소 크기 : %zu 바이트\n", sizeof(&db));


	printf("char형 *변수 주소 크기 : %zu 바이트\n", sizeof(pch));
	printf("int형 *변수 주소 크기 : %zu 바이트\n", sizeof(pin));
	printf("double형 *변수 주소 크기 : %zu 바이트\n", sizeof(pdb));


	printf("char형 포인터가 가리키는 자료형 크기 : %zu 바이트\n", sizeof(*pch));
	printf("int형 포인터가 가리키는 자료형 크기 : %zu 바이트\n", sizeof(*pin));
	printf("double형 포인터가 가리키는 자료형 크기 : %zu 바이트\n", sizeof(*pdb));




}