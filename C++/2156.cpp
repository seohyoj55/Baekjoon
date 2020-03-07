#include <iostream>
#include <algorithm>
using namespace std;

int D[10001];
int grape[10001];

int dp(int n) {
	if (n == 1)
		return grape[1];
	if (n == 2)
		return grape[1] + grape[2];
	if (n == 3)
		return max({ grape[1] + grape[2], grape[2] + grape[3], grape[3] + grape[1] });
	if (D[n])
		return D[n];
	return D[n] = max({ dp(n - 2) + grape[n], dp(n - 3) + grape[n - 1] + grape[n], dp(n - 1) });
}

int main() {
	int N;
	cin >> N;
	for (int i = 1; i <= N; i++)
		cin >> grape[i];
	cout << dp(N);
}