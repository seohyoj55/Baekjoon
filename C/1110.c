#include<stdio.h>

int main()
{
	int n, cnt = 0, sum = 0, new = -1, tmp;
	scanf("%d", &n);
	tmp = n;
	while (n != new)
	{
		cnt++;
		if (tmp < 10)
			new = 10 * tmp + tmp;
		else
		{
			sum = tmp / 10 + tmp % 10;
			new = (tmp % 10) * 10 + (sum % 10);
		}
		tmp = new;
	}
	printf("%d", cnt);
}