#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int n, m;
	int i, j, k;
	int MAX = 0;
	int card[101] = { 0 };
	cin >> n >> m;
	for (i = 0; i < n; i++)
		cin >> card[i];
	sort(card, card + n);
	for (i = 0; i < n - 2; i++)
		for (j = i + 1; j < n - 1; j++)
			for (k = j + 1; k < n; k++)
				if (card[i] + card[j] + card[k] <= m)
					MAX = max(MAX, card[i] + card[j] + card[k]);
	cout << MAX << endl;
	return 0;
}