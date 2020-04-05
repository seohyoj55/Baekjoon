#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main(void) {
	int N;
	int i, j, k;
	scanf("%d", &N);


	if (N == 1)
		printf("*");
	else
	{

		//상단

		//첫 줄
		for (i = 0; i < 4 * N - 3; i++)
			printf("*");
		puts("");
		printf("*");
		puts("");

		for (i = 0; i < N - 1; i++)
		{
			printf("* ");
			for (j = 0; j < i; j++)
				printf("* ");

			for (j = 0; j < 4 * (N - i) - 5; j++)
				printf("*");

			for (j = 0; j < i; j++)
				printf(" *");


			puts("");

			if (i!=(N-2))
			{
				printf("* ");
				for (j = 0; j <= i; j++)
					printf("* ");

				for (j = 0; j < 4 * (N - i) - 9; j++)
					printf(" ");


				for (j = 0; j <= i; j++)
					printf(" *");


				puts("");
			}

		}


		//중간
		for (i = 0; i < 2; i++)
		{
			for (j = 0; j < 2 * N - 1; j++)
				printf("* ");
			puts("");
		}

		//하단
		for (j = N - 2; j >= 0; j--) //하단 줄 수
		{

			//왼쪽 테두리
			for (k = 0; k < j; k++)
				printf("* ");

			//테두리만
			printf("*");
			for (k = 0; k < 4 * (N - j) - 5; k++)
				printf(" ");
			printf("*");

			//오른쪽 테두리
			for (k = 0; k < j; k++)
				printf(" *");
			puts("");

			//왼쪽 테두리
			for (k = 0; k < j; k++)
				printf("* ");

			//가장 긴 가로줄
			for (k = 0; k < 4 * (N - j) - 3; k++)
				printf("*");

			//오른쪽 테두리
			for (k = 0; k < j; k++)
				printf(" *");
			puts("");


		}
	}
	return 0;
}