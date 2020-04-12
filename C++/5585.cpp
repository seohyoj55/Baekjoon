#include <iostream>
using namespace std;

int main() {
	int N, i;
	int W[] = { 500, 100, 50, 10, 5, 1 };
	int total = 0;
	cin >> N;
	N = 1000 - N;
	int index = -1;
	while (true) {
		index++;
		total += N / W[index];
		N -= N / W[index] * W[index];
		if (N == 0)
			break;
	}
	cout << total;
	return 0;
}