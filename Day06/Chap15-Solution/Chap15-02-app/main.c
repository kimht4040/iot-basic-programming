#include <stdio.h>


void swap_ptr(char** ppa, char** ppb) {//포인터 값을 바꾸는 매개변수
	char* ptemp;
	ptemp = *ppa;
	*ppa = *ppb;
	*ppb = ptemp;
	printf("%s\n", ptemp);
}
void print_str(char** pps, int count) { //포인터 배열을 매개변수
	for (int i = 0; i < count; i++) {
		printf("%s\n", pps[i]);
	}
}

int main() {

	char* pa = "success";
	char* pb = "failure";



	printf("pa -> %s, pb -> %s\n", pa, pb);
	swap_ptr(&pa, &pb);

	printf("pa -> %s, pb -> %s\n", pa, pb);
	

	char* ptr_animal[] = { "eagle", "tiger", "lion", "squirrel" };
	int count = sizeof(ptr_animal) / sizeof(ptr_animal[0]);


	print_str(ptr_animal, count);

	


	return 0;
}