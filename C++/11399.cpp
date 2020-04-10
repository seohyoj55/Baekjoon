#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int N, i;
	int T[1001] = { 0 };
	int total = 0;
	cin >> N;
	for (i = 0; i < N; i++)
		cin >> T[i];
	sort(T, T+N);
	for (i = 0; i < N; i++)
		total += T[i] * (N - i);
	cout << total;
	return 0;
}