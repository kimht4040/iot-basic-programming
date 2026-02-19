#define _CRT_SECURE_NO_WARNINGS


#include "adrbook.h"






//함수


int main() {
	int choice;
	ab_init();
	load();
	sort_name();
	while (1) {

		print_menu();
		choice = read_menu();

		switch (choice) {
		case 1:
			add_contact();
			
			sort_name();
			break;
		case 2:
			list_contacts();
			break;
		case 3:
			update();
			sort_name();
			break;
		case 4:
			del();
			break;
		case 5:
			serch_name();
			break;
		case 6:

			printf("종료\n");
			save();
			ab_free();
			exit(0);
			break;
		default:
			clear_screen();
			printf("1 ~ 6사이에 선택\n");
		}


	}

	return 0;
}
