#include<stdio.h>
#include<stdlib.h>
int main() {
	int a[10];
	int temp;
	for (int i = 0; i <10; i++) {
		scanf("%d", &a[i]);

	}
	for (int i = 0; i <10; i++) {
		for (int j = 0; j <10; j++) {
			temp = a[i];
			a[i] = a[j];
			a[j] = temp;
			i++;
			j--;
			
		}

	}
	for (int i = 0; i < 10; i++) {
		printf("%d\n", a[i]);

	}
	system("pause");
	return 0;
}