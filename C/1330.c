#include <stdio.h>

int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	if (a - b < 0)
		printf("<");
	else if (a - b > 0)
		printf(">");
	else
		printf("==");

	return 0;
}