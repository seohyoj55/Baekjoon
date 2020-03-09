#include <iostream>
#include <algorithm>
using namespace std;

long long d[101][100001];

long long dp(int knapsack[][2], int n, int k) {
	if (n == 1)
		if (knapsack[n][0] <= k)	//첫번째 짐의 무게가 k이하
			return knapsack[n][1];
		else
			return 0;
	if (d[n][k])
		return d[n][k];

	if (k >= knapsack[n][0])
		return d[n][k] = max(dp(knapsack, n - 1, k), dp(knapsack, n - 1, k - knapsack[n][0]) + knapsack[n][1]);
	else
		return d[n][k] = dp(knapsack, n - 1, k);
}

int main() {
	int N, K, i;
	int knapsack[101][2];
	cin >> N >> K;

	for (i = 1; i < N + 1; i++)
		cin >> knapsack[i][0] >> knapsack[i][1];  //1열에 무게, 2열에 가치

	cout << dp(knapsack, N, K) << endl;

	return 0;
}