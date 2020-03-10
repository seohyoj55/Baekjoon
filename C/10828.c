#include<stdio.h>
#include<string.h>
#define MAX 100

void push(int);
void pop();
void size();
void empty();
void top();

int stack[MAX];
int stacktop = -1;

int main()
{
	int i, N, num;
	char com[10];
	scanf("%d", &N);
	for (i = 0; i < N; i++)
	{
		scanf("%s", com);
		if (strcmp(com, "push") == 0)
		{
			scanf("%d", &num);
			push(num);
		}
		else if (strcmp(com, "pop") == 0)
			pop();
		else if (strcmp(com, "size") == 0)
			size();
		else if (strcmp(com, "empty") == 0)
			empty();
		else if (strcmp(com, "top") == 0)
			top();
	}
}

void push(int num)
{
	stacktop++;
	stack[stacktop] = num;
}

void pop()
{
	if (stacktop == -1)
	{
		printf("-1\n");
		return 0;
	}
	else
	{
		printf("%d\n", stack[stacktop]);
		stacktop--;
	}
}

void size()
{
	printf("%d\n", stacktop + 1);
}

void empty()
{
	if (stacktop == -1)
		printf("1\n");
	else
		printf("0\n");
}

void top()
{
	if (stacktop == -1)
		printf("-1\n");
	else
		printf("%d\n", stack[stacktop]);
}