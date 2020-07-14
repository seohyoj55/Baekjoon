#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<math.h>

int main(void) {
	int i, j;
	int arr[10] = { 0, };
	int temp = 0;

	while (1)
	{
		scanf("%d %d %d", &arr[0], &arr[1], &arr[2]);
		if (arr[0] == 0 && arr[1] == 0 && arr[2] == 0)
			break;
		for (i = 0; i < 3; i++)
			for (j = i + 1; j < 3; j++)
				if (arr[i] > arr[j])
				{
					temp = arr[i];
					arr[i] = arr[j];
					arr[j] = temp;
				}

		if (((int)pow(arr[0], 2.0) + (int)pow(arr[1], 2.0)) == (int)pow(arr[2], 2.0))
			printf("right\n");
		else
			printf("wrong\n");
	}
	return 0;
}