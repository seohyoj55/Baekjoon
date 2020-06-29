#include<stdio.h>

int main()
{
	int str[8];
	int i, j = 0;
	for (i = 0; i < 8; i++)
		scanf("%d", &str[i]);

	
	if (str[0] == 1)
	{
		for (i = 0; i < 8; i++)
		{
			if (str[i] != i + 1)
			{
				printf("mixed\n");
				return 0;
			}
		}
		printf("ascending\n");
	}
	else if (str[0] == 8)
	{
		for (i = 8; i > 0; i--)
		{
			if (str[j] != i)
			{
				printf("mixed\n");
				return 0;
			}
			j++;
		}
		printf("descending\n");
	}
	else
		printf("mixed\n");
	return 0;
}