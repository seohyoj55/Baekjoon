#include <iostream>
#include <string>
using namespace std;

int main() {
	string A;
	int sum[26] = { 0, };
	cin >> A;
	for (int i = 0; i < int(A.length()); i++)
		sum[A[i] - 'a']++;
	for (int i = 0; i < 26; i++)
		cout << sum[i] << ' ';
}