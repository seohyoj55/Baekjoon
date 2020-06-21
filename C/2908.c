#include<stdio.h>

int main()
{
	int a, b, c = 0, d = 0;
	scanf("%d %d", &a, &b);

	c += (a % 10) * 100;
	a /= 10;
	c += (a % 10) * 10;
	a /= 10;
	c += (a % 10);

	d += (b % 10) * 100;
	b /= 10;
	d += (b % 10) * 10;
	b /= 10;
	d += (b % 10);

	if (c > d)
		printf("%d", c);
	else
		printf("%d", d);
}