#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	int n;
	cin >> n;
	if (!(n % 4) && n % 100)
		cout << 1 << endl;
	else if (!(n % 400))
		cout << 1 << endl;
	else cout << 0 << endl;

	return 0;
}