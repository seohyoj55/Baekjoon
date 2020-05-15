#include <iostream>
using namespace std;

int main() {
	int N, K, i;
	int W[11] = { 0 };
	int total = 0;
	cin >> N >> K;
	for (i = 0; i < N; i++)
		cin >> W[i];
	int index = N;
	while (true) {
		index--;
		total += K / W[index];
		K -= K / W[index] * W[index];
		if (K == 0)
			break;
	}
	cout << total;
	return 0;
}