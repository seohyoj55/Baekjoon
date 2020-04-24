#include <iostream>
using namespace std;

int main() {
	int E, S, M, cnt = 0;
	cin >> E >> S >> M;
	while (true) {
		cnt++;
		if (E == S && S == M) {
			cout << cnt + E - 1; break;
		}
		if (E == 1) E = 15;
		else E--;
		if (S == 1) S = 28;
		else S--;
		if (M == 1) M = 19;
		else M--;
	}
	return 0;
}