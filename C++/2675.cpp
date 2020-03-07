#include <iostream>
#include <string>
using namespace std;

int main() {
	string str;
	int n, m;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> m >> str;
		for (int j = 0; j<int(str.length()); j++)
			for (int k = 0; k < m; k++)
				printf("%c", str[j]);
		puts("");
	}

	return 0;
}