#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h>
#include "student.h"


#define PI 3.14
#define LIMIT 1000
#define MSG "passed"
#define ERR_PRN printf("허용범위 초과\n")
//조건부 컴파일 지시자

#define VER 7
#define BIT16

int main() {
	Student st1 = { 1, "홍박사" };
	printf("%d %s\n", st1.num, st1.name);
	int max;
	printf("%.2f\n", PI);
	printf("%s\n", MSG);
	ERR_PRN;
#if VER >= 6

#endif

#ifdef BIT16
	max = 32767;
#else
	max = 12301920;
#endif
	printf("compile build date and time : %s, %s \n", __DATE__, __TIME__);
	printf("file name : %s\n", __FILE__);
	printf("function name : %s\n", __FUNCTION__);
	printf("line number : %d\n", __LINE__);

#line 100 "macro.c"
	printf("compile build date and time : %s, %s \n", __DATE__, __TIME__);
	printf("file name : %s\n", __FILE__);
	printf("function name : %s\n", __FUNCTION__);
	printf("line number : %d\n", __LINE__);




	return 0;
}