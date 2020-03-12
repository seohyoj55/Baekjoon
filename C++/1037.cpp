#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


int main() {
	int N, i, temp;
	vector<int> v;
	cin >> N;
	for (i = 0; i < N; i++)
	{
		cin >> temp;
		v.push_back(temp);
	}
	if (N == 1)
	{
		cout << temp * temp;
		return 0;
	}
	sort(v.begin(), v.end());
	
	cout << v.front() * v.back();
	return 0;
}