#include <iostream>
using namespace std;

int main() {
	int n, i, j, five, three = 0, sum = 0;
	cin >> n;
	five = n / 5;
	if (n % 5 == 0) {
		cout << five << endl;
		return 0;
	}
	while (true) {
		if ((n - five * 5) % 3 == 0)
		{
			three = (n - five * 5) / 3;
			sum = five + three;
			break;
		}
		five--;
		if (five == -1)
		{
			sum = -1;
			break;
		}
	}
	cout << sum << endl;

	return 0;
}