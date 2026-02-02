#include <stdio.h>
#include <limits.h> //각 타입별 최대, 최소 값 저장하는 헤더파일


int main() {

	printf("int 최대값: %d", INT_MAX);


	printf("%d\n", 12);
	printf("%d\n", 014);
	printf("%d\n", 0xC);
	printf("%d\n", 12);
	printf("%o\n", 12);
	printf("%x\n", 12);
	printf("%X\n", 255);//대문자로 쓰면 대문자 출력됨

	printf("%.1lf\n", 1e6);
	printf("%.7lf\n", 1e-6);




	printf("%d\n", 'A');


	return 0;
}