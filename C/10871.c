#include<stdio.h>

int main()
{
	int N, X;
	int i;
	int num;
	scanf("%d %d", &N, &X);
	for (i = 0; i < N; i++)
	{
		scanf("%d", &num);
		if (num < X)
			printf("%d ", num);
	}
}