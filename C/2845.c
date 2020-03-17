#include<stdio.h>

int main()
{
	int L;
	int P;
	int num;
	scanf("%d %d", &L, &P);
	
	for (int i = 0; i < 5; i++)
	{
		scanf("%d", &num);
		printf("%d ", num-L*P);
	}
}