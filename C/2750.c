#include<stdio.h>

int main()
{
	int str[1000];
	int N, i, j, tmp;
	scanf("%d", &N);
	for (i = 0; i < N; i++)
	{
		scanf("%d", &str[i]);
	}
	for(i=0;i<N-1;i++)
		for (j = i + 1; j < N; j++)
		{
			if (str[i] > str[j])
			{
				tmp = str[i];
				str[i] = str[j];
				str[j] = tmp;
			}
		}
	for (i = 0; i < N; i++)
		printf("%d\n", str[i]);
}