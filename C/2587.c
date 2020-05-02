#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main(void) {
	int i, j;
	int temp = 0;
	int avg;
	int arr[10] = { 0 };
	int sum = 0;

	for (i = 0; i < 5; i++)
	{
		scanf("%d", &arr[i]);
		sum += arr[i];
	}

	avg = sum / 5;
	for (i = 0; i < 5; i++)
	{
		for (j = i + 1; j < 5; j++)
		{
			if (arr[i] > arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}

	printf("%d\n%d", avg, arr[2]);
	return 0;
}