#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <algorithm>
using namespace std;

int A[2001];
int B[2001];
int N;
int d[2001];
int a, b;


int main(void) {
	int i;
	int real_max = 0;
	int max = 0;
	int idx_a = 0;
	int idx_b = 0;
	int check = 0;
	int area = 0;

	scanf("%d %d %d", &N, &a, &b);

	for (i = 0; i < a; i++)
		scanf("%d", &A[i]);
	for (i = 0; i < b; i++)
		scanf("%d", &B[i]);

	sort(A, A + a, greater<int>());
	sort(B, B + b, greater<int>());

	check = N / 2;

	for (i = 0; i < check; i++)
	{
		if (i <= b - 1)
			max += B[idx_b++];
		else
			break;
	}

	area = N - idx_b * 2;

	for (i = 0; i < area; i++)
	{
		if (i <= a - 1)
			max += A[idx_a++];
		else
			break;
	}

	real_max = max;

	idx_b -= 1;
	while (idx_b >= 0) {
		if (idx_a + 1 <= a - 1)
		{
			max -= B[idx_b];
			max += A[idx_a] + A[idx_a + 1];

			if (real_max < max)
			{
				real_max = max;
				idx_a += 2;
				idx_b -= 1;
			}
			else if (real_max == max)
				idx_b -= 1;
			else
				break;
		}
		else
			break;
	}

	cout << real_max << endl;


}