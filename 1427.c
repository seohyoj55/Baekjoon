#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main(void) {
	int N, k = 0;
	int i, j, l, m;
	int flag = 0, temp = 0;
	scanf("%d", &N);
	int arr[20] = { 0 };

	while (N)
	{
		arr[flag++] = N % 10;
		N /= 10;
	}
	for(i=0;i<flag;i++)
		for (j = i+1; j < flag; j++)
		{
			if (arr[i] < arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}

	for (i = 0; i < flag; i++)
		printf("%d", arr[i]);
	return 0;
}