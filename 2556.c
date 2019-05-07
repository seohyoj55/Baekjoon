#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i, j, num;

	scanf("%d", &num);
	if (num == 1)printf("*");
	else {

		for (i = 0; i<num; i++) {
			printf("*");
		}
		printf("\n");
		for (i = 0; i<num - 2; i++) {
			printf("*");
			for (j = 0; j<num - 2; j++) {
				printf("*");
			}
			printf("*");
			printf("\n");
		}

		for (i = 0; i<num; i++) {
			printf("*");
		}
	}

	return 0;

}
