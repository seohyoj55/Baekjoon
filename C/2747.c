#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main(void) {
	int N;
	int i;
	int temp = 0;
	int a = 0, b = 1;
	scanf("%d", &N);

	if (N == 0)
	{
		printf("0");
		return 0;
	}
	else if (N == 1)
	{
		printf("1");
		return 0;
	}
	else
	{
		for (i = 0; i < N - 1; i++)
		{
			temp = a + b;
			a = b;
			b = temp;
		}
		printf("%d", temp);
	}
	return 0;
}