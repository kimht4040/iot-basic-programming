#include <stdio.h>





int main() {

	char small, cap = 'G';


	if ((cap >= 'A') && (cap <= 'z')) {
		small = cap + ('a' - 'A');
	}
	printf("대문자 : %c \n", cap);
	printf("소문자 : %c\n", small);





	return 0;
}