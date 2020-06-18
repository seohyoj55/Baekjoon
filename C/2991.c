#include<stdio.h>
#include<math.h>

int main()
{
	int a, b, c, d;
	int visit, temp, attack;
	int i;
	scanf("%d %d %d %d", &a, &b, &c, &d);

	for (i = 0; i < 3; i++) {
		attack = 0;
		scanf("%d", &visit);
		temp = visit % (a + b);
		if (temp <= a && temp != 0)
			attack++;
		temp = visit % (c + d);
		if (temp <= c && temp != 0)
			attack++;
		printf("%d ", attack);
	}
}