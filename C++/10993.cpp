#include <iostream>
#include <cmath>
using namespace std;

char arr[1024][2046];
int flag = 0;

int draw(int N, int a, int b) {
	int i, j, l, m, w, h;
	if (N == 1)
	{
		arr[0][0] = '*';
		return 0;
	}
	if (N == 2)
	{
		for (i = b; i < b + 5; i++)
			arr[a][i] = '*';
		for (i = b + 1; i < b + 4; i++)
			arr[a + 1][i] = '*';
		arr[a + 2][b + 2] = '*';
		arr[a + 1][b] = ' ';
		arr[a + 2][b] = ' ';
		arr[a + 2][b + 1] = ' ';
		return 0;
	}
	w = pow(2, N + 1) - 3;
	h = pow(2, N) - 1;

	if (N % 2 == 0)	//even
	{
		for (i = a; i < a + h; i++) {
			for (j = b; j < b + w; j++) {
				if (i == a + h - 1 && flag == 0)
				{
					if (j == b + w / 2)
						arr[i][j] = '*';
					else if (j < b + w / 2)
						arr[i][j] = ' ';
				}
				else if (i == a)
					arr[i][j] = '*';
				else if (i - a == j - b)
					arr[i][j] = '*';
				else if (i - a + 1 == -(j - b - w))
				{
					arr[i][j] = '*';
					break;
				}
				else
					arr[i][j] = ' ';
			}
		}
		flag = 1;
		draw(N - 1, a + 1, b + w / 4 + 1);
	}
	else 	//odd
	{
		for (i = a; i < a + h; i++) {
			for (j = b; j < b + w; j++) {
				if (i == a && flag == 0)
				{
					if (j == b + w / 2)
						arr[i][j] = '*';
					else if(j< b + w / 2)
						arr[i][j] = ' ';
				}
				else if (i == a + h - 1)
					arr[i][j] = '*';
				else if (i + j == a + b + h - 1)
					arr[i][j] = '*';
				else if (i - j == a - b + h - w)
				{
					arr[i][j] = '*';
					break;
				}
				else
					arr[i][j] = ' ';
			}
		}
		flag = 1;
		draw(N - 1, a + h / 2, b + w / 4 + 1);
	}
	return 0;
}

int main() {
	int N, i, j;
	cin >> N;
	draw(N, 0, 0);
	for (i = 0; i < pow(2, N) - 1; i++)
	{
		for (j = 0; j < pow(2, N + 1) - 3 + 1; j++)
		{
			if (arr[i][j] != NULL)
				cout << arr[i][j];
		}
		if (i == pow(2, N) - 2)
			break;
		cout << endl;
	}
	return 0;
}