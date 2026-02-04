#include <stdio.h>


int main(void) {
	int sum = 0;
	int i = 0;

	for (i = 0; i < 10; i++) {
		if ( sum >30 ) {
			break;
		}

		sum+=i;
	}
	printf("sum : %d\n", sum);

	printf("i : %d\n", i);


	return 0;
}
	