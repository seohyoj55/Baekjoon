#include <iostream>
#include <string>
using namespace std;

int main() {
	string A;
	int sum[4] = { 0, };
	while (true) {
		getline(cin, A);
		if (A.empty())
			return 0;
		for (int i = 0; i < int(A.length()); i++)
		{
			if (A[i] >= 'a' && A[i] <= 'z')
				sum[0]++;
			else if (A[i] >= 'A' && A[i] <= 'Z')
				sum[1]++;
			else if (A[i] >= '0' && A[i] <= '9')
				sum[2]++;
			else if (A[i] == ' ')
				sum[3]++;
		}
		for (int i = 0; i < 4; i++)
		{
			cout << sum[i] << ' ';
			sum[i] = 0;
		}
		cout << endl;
		A.clear();
	}
}