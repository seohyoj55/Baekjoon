#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main(void) {
	int i;
	int flag = 0, temp = 0;
	int min = 100;
	int arr[10] = { 0 };
	int sum = 0;

	for (i = 0; i < 7; i++)
	{
		scanf("%d", &temp);
		if (temp % 2 == 1)
			arr[flag++] = temp;
	}

	if (flag == 0)
		printf("-1");
	else {
		for (i = 0; i < flag; i++)
		{
			sum += arr[i];
			if (min > arr[i])
			{
				min = arr[i];
			}
		}

		printf("%d\n%d", sum, min);
	}
	return 0;
}