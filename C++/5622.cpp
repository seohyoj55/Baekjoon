#include <iostream>
#include <string>
using namespace std;

int main() {
	string dial;
	cin >> dial;
	int sum = 0;
	for (int i = 0; i<int(dial.length()); i++)
	{
		if (dial[i] >= 'A')
			sum+=3;
		if (dial[i] >= 'D')
			sum++;
		if (dial[i] >= 'G')
			sum++;
		if (dial[i] >= 'J')
			sum++;
		if (dial[i] >= 'M')
			sum++;
		if (dial[i] >= 'P')
			sum++;
		if (dial[i] >= 'T')
			sum++;
		if (dial[i] >= 'W')
			sum++;
	}
	cout << sum << endl;
	return 0;
}