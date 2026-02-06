#include <stdio.h>




int main() {

	printf("%s\n", "apple");
	printf("%u\n", "apple");

	printf("%u\n", "apple"+1);
	printf("%c\n", *("apple" + 1));
	printf("%c\n", "apple"[0]);



	char fruit[6] = "apple";

	printf("%s\n", fruit);
	printf("%u\n", fruit);

	printf("%u\n", fruit + 1);
	printf("%c\n", *(fruit + 1));
	printf("%c\n", fruit[0]);

	strcpy(fruit, "banan");
	printf("%s\n", fruit);



	char* dessert = "apple";
	dessert = "banana";
	printf("%s\n", dessert);
	return 0;
}