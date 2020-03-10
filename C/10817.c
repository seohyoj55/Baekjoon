#include<stdio.h>

int main()
{
	int a, b, c;
	int n1=0, n2=0, n3=0;
	scanf("%d %d %d", &a, &b, &c);
	if (a > b)
		n1++;
	else
		n2++;
	if (a > c)
		n1++;
	else
		n3++;
	if (b > c)
		n2++;
	else
		n3++;
	if (n1 == 1)
		printf("%d", a);
	else if (n2 == 1)
		printf("%d", b);
	else
		printf("%d", c);
}