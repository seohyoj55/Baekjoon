#include<stdio.h>

int main()
{
	int a, b, c;
	int sum, i;
	int str[10] = { 0 };
	scanf("%d %d %d", &a, &b, &c);
	sum = a*b*c;
	while (sum > 0)
	{
		str[sum % 10]++;
		sum = sum / 10;
	}
	for (i = 0; i < 10; i++)
		printf("%d\n", str[i]);
}