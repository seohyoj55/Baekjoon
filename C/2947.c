#include<stdio.h>

int main(void)
{
	int str[5];
	int after[5] = { 1,2,3,4,5 };
	int i, j, tmp;
	
	scanf("%d %d %d %d %d", &str[0], &str[1], &str[2], &str[3], &str[4]);

//	if (str[0] == 1 && str[1] == 2 && str[2] == 3 && str[3] == 4 && str[4] == 5)

	while (!(str[0] == 1 && str[1] == 2 && str[2] == 3 && str[3] == 4 && str[4] == 5))
	{
		for (i = 0; i < 4; i++)
		{
			if (str[i] > str[i + 1])
			{
				tmp = str[i];
				str[i] = str[i + 1];
				str[i + 1] = tmp;
				printf("%d %d %d %d %d\n", str[0], str[1], str[2], str[3], str[4]);
			}
		}

	}
}