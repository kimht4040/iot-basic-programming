#include <stdio.h>

void auto_func() {
	auto int a = 0;
	a++;
	printf("%d\n", a);
}
void static_func() {
	static int a = 0;
	a++;
	printf("%d\n", a);
}

int main() {


	printf("일반 지역변수 사용 함수 호출\n");


	for (int i = 0; i < 3; i++) {
		auto_func();
	}

	printf("정적 지역변수 사용 함수 호출\n");

	for (int i = 0; i < 3; i++) {
		static_func();
	}

}

