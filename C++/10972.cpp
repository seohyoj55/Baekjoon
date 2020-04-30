#include <iostream>
#include <algorithm>
using namespace std;

int arr[10001];

int main() {
	int N, i, k, temp;
	cin >> N;
	for (i = 0; i < N; i++)
		cin >> arr[i];
	for (i = N - 1; i > 0; i--)
		if (arr[i] > arr[i - 1])
		{
			sort(arr + i, arr + N);
			k = i;
			while (true) {
				if (arr[k] > arr[i - 1])
				{
					temp = arr[k];
					arr[k] = arr[i - 1];
					arr[i - 1] = temp;
					break;
				}
				k++;
			}
			sort(arr + i, arr + N);
			for (i = 0; i < N; i++)
				cout << arr[i] << ' ';
			return 0;
		}
	cout << -1;
	return 0;
}