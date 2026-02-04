//switch case 문
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>



int main() {
	

	int rank, money=0;
	
	printf("등수를 입력하세요 : ");
	scanf("%d", &rank);
	

	/*switch (rank) {
		case 1:
			money = 10000000;
			break;
		case 2:
			money = 5000000;
			break;
		case 3:
			money = 1000000;
			break;
		default :
			money = 10000;
	}*/

	if (rank == 1) {
		money = 10000000;
	}
	else if (rank == 2) {
		money = 5000000;
	}
	else if (rank == 3) {
		money = 2000000;
	}
	else
		money = 10000;

	printf("상금은 : %d원 입니다.", money);






	return 0;

}