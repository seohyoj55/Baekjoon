#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main(void) {
	int N;
	int i, j, k;
	int flag = 0;
	scanf("%d", &N);


	if (N == 1)
		printf("*");
	else
	{

		//상단
		for (j = 0; j < N - 1; j++) //상단 줄 수
		{
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

		}

		//중간
		for (j = 0; j < 2 * N - 1; j++)
			printf("* ");
		puts("");


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