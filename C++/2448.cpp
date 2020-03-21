#include <iostream>
using namespace std;

char arr[3100][6200];

 int draw(int N, int a, int b) {
	int i, j, l, m;
	if (N == 3)
	{
		for (i = a; i < a + 3; i++)
			for (j = b; j < b + 5; j++)
			{
				if (i == a && j == b + 2)
					arr[i][j] = '*';
				else if (i == a + 1 && j == b + 1)
					arr[i][j] = '*';
				else if (i == a + 1 && j == b + 3)
					arr[i][j] = '*';
				else if (i == a + 2)
					arr[i][j] = '*';
				else
					arr[i][j] = ' ';
			}
		return 0;
	}


	draw(N / 2, a, b + N / 2);
	draw(N / 2, a + N / 2, b);
	draw(N / 2, a + N / 2, b + N);

	return 0;
}

int main() {
	int N, i, j;
	cin >> N;
	draw(N, 0, 0);
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < 2 * N - 1; j++)
		{
			if (arr[i][j] != NULL)
				cout << arr[i][j];
			else
				cout << ' ';
		}
		cout << endl;
	}
	return 0;
}