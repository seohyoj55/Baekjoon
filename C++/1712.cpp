#include <iostream>
using namespace std;

int main() {
	long long A, B, C;

	cin >> A >> B >> C;
	if (B >= C)
		cout << -1 << endl;
	else
		cout << A / (C - B) + 1 << endl;

	return 0;
}