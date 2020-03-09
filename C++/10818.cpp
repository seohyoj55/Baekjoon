#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int temp, N;
	int MAX = -1000000, MIN = 1000000;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> temp;
		MAX = max(MAX, temp);
		MIN = min(MIN, temp);
	}
	cout << MIN << ' ' << MAX << endl;
	return 0;
}