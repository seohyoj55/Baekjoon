#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main(void) {
	int i;
	int arr[10] = { 0 };
	for (i = 0; i < 6; i++)
		scanf("%d", &arr[i]);
	if (arr[0] == arr[2])
		printf("%d ", arr[4]);
	else if (arr[0] == arr[4])
		printf("%d ", arr[2]);
	else
		printf("%d ", arr[0]);

	if (arr[1] == arr[3])
		printf("%d ", arr[5]);
	else if (arr[1] == arr[5])
		printf("%d ", arr[3]);
	else
		printf("%d ", arr[1]);
	return 0;
}