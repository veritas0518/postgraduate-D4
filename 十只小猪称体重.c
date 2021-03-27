#include<stdio.h>
#include<stdlib.h>
#define SIZE 10
int main0102() {
	int arr[SIZE];
	for (int i = 0; i < SIZE; i++) {
		scanf_s("%d", &arr[i]);
	}
	int max = 0;
	for (int i = 0; i < SIZE; i++) {

		if (arr[i] > max) {
			max = arr[i];
		}
	}
	printf("体重最重的小猪为%d\n", max);
	system("pause");
	return 0;
}