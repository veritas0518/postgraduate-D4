#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
int main0103() {
	for (int i = 0; i < 24; i++) {
		for (int j = 0; j < 60; j++) {
			for (int k = 0; k < 60; k++) {
				system("cls");//ÇåÆÁ
				printf("%02d:%02d:%02d\n", i, j, k);
				Sleep(980);

			}
		}
	}
	system("pause");
	return 0;
}