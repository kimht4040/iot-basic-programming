#include <stdio.h>

int main() {
	int res;
	
	res = sizeof(short) < sizeof(long);
	printf("%s", res == 1 ? "long" : "short");

	return 0;
}