#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main(void) {
	int i;
	int flag = 0;
	int max = 0;
	int arr[10] = { 0 };

	for (i = 0; i < 9; i++)
		scanf("%d", &arr[i]);

	for(i=0;i<9;i++)
		if (arr[i] > max)
		{
			max = arr[i];
			flag = i;
		}

	printf("%d\n%d", max, flag+1);
	return 0;
}