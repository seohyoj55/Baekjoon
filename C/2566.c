#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main(void) {
	int i, j;
	int row = 0, col = 0;
	int max = 0;
	int arr[10][10] = { 0 };

	for (i = 0; i < 9; i++)
		for (j = 0; j < 9; j++)
			scanf("%d", &arr[i][j]);

	for (i = 0; i < 9; i++)
		for (j = 0; j < 9; j++)
			if (max < arr[i][j])
			{
				max = arr[i][j];
				row = i;
				col = j;
			}

	printf("%d\n%d %d", max, row+1, col+1);
	return 0;
}