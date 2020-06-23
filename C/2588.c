#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main(void) {
	int N;
	int temp = 0;

	scanf("%d", &N);
	scanf("%d", &temp);

	printf("%d\n", N * (temp % 10));
	printf("%d\n", N * ((temp / 10) % 10));
	printf("%d\n", N * (temp / 100));
	printf("%d", N * temp);
	return 0;
}