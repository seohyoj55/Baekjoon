#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	int N, arr[9];
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		arr[i] = i + 1;
		cout << i + 1 << ' ';
	}
	cout << '\n';
	while (next_permutation(arr, arr + N)) {
		for (int i = 0; i < N; i++)
			cout << arr[i] << ' ';
		cout << '\n';
	}
	return 0;
}