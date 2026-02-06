#include <stdio.h>

void print_arr(int arr[], int size) {
	for (int i = 0; i < size; i++) {
		printf("%d\n", arr[i]);
	}
}

void print_arr_UsingPointer(int* arr, int size) {
	for (int i = 0; i < size; i++) {
		printf("%d\n", *(arr+i));
	}
}

int main() {

	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
	int arr2[5] = { 10,20,30,40};
	print_arr(arr, 10);
	print_arr_UsingPointer(arr, 10);
	print_arr_UsingPointer(arr2, sizeof(arr2)/sizeof(arr2[0]));
	return 0;
}