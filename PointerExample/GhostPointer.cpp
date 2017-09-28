#include<iostream>
#include<conio.h>

typedef int(*SoSanh)(int, int);

int lonNhat(int num1, int num2) {
	return num1 > num2 ? num1 : num2;
}

int nhoNhat(int num1, int num2) {
	return num1 < num2 ? num1 : num2;
}

int giaTri(SoSanh func, int *arr, int length) {
	int retVal = *arr;
	for (int i = 1; i < length; i++) {
		retVal = func(retVal, arr[i]);
	}
	return retVal;
}

void main() {
	int *arr = (int*)(calloc(4, sizeof(int)));
	*arr = -3;
	*(arr + 1) = -7;
	*(arr + 2) = 10;
	*(arr + 3) = 5;
	printf("Gia tri lon nhat = %d\n", giaTri(lonNhat, arr, 4));
	printf("Gia tri nho nhat = %d", giaTri(nhoNhat, arr, 4));
	_getch();
}