#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<math.h>

int main(void) {
	int N;
	int i;
	int sum = 0;

	scanf("%d", &N);
	sum = 1;
	for (i = 0; i < N; i++)
	{
		sum *= i + 1;
	}
	printf("%d", sum);
	return 0;
}