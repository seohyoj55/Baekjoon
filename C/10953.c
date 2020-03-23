#include<stdio.h>

int main()
{
	int a, b, i, num;
	scanf("%d", &num);
	for(i=1;i<num+1;i++) {
		scanf("%d,%d", &a, &b);
		printf("%d\n", a + b);
	}
}