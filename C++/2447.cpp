#include <iostream>
using namespace std;

char arr[2188][2188];

int draw(int N, int a, int b) {
	int i, j, l, m;
	if (N == 3)
	{
		for (i = a; i < a + N; i++)
			for (j = b; j < b + N; j++)
			{
				if (i == a + 1 && j == b + 1)
					arr[i][j] = ' ';
				else
					arr[i][j] = '*';
			}
		return 0;
	}
	
	for (i = a; i < a + 2 * N / 3 + 1; i += N / 3)
		for (j = b; j < b + 2 * N / 3 + 1; j += N / 3)
		{
			if (i == a + N / 3 && j == b + N / 3)
				for (l = i; l < i + N / 3; l++)
					for (m = j; m < j + N / 3; m++)
						arr[l][m] = ' ';
			else
				draw(N / 3, i, j);
		}
	return 0;
}

int main() {
	int N, i, j;
	cin >> N;
	draw(N, 0, 0);
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < N; j++)
		{
			cout << arr[i][j];
		}
		cout << endl;
	}
	return 0;
}