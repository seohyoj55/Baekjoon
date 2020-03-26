#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main(void) {
	int N;
	int i, j;
	int flag = 0;
	scanf("%d", &N);
	
	
	if (N == 1)
		printf("*");
	else
	{
		for (i = 0; i < 2 * N; i++)
		{
			if (i % 2 == 0)
				flag = 0;
			else
				flag = 1;
			for (j = 0; j < N; j++)
			{
				if (flag == 0)
				{
					printf("*");
					flag = 1;
				}
				else {
					printf(" ");
					flag = 0;
				}
			}
			puts("");

		}
	}
	return 0;
}