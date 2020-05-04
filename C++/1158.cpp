#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	int N, K, flag = 0, cnt = 0, zero = 0, i;
	vector<int> v, answer;
	cin >> N >> K;
	flag = K;
	for (int i = 0; i <= N; i++)
		v.push_back(1);
	while (true) {
		if (v[flag] == 1) {
			v[flag] = 0;
			answer.push_back(flag);
		}
		zero = 0;
		for (i = 1; i < v.size(); i++)
			if (v[i] != 0)
				zero = 1;
		if (zero == 0)
			break;
		cnt = 0;
		while (true) {
			if (flag == N)
				flag = 1;
			else
				flag++;
			if (v[flag] == 1)
			{
				cnt++;
				if (cnt == K)
					break;
			}
		}
	}
	cout << '<';
	for (i = 0; i < answer.size() - 1; i++)
		cout << answer[i] << ", ";
	cout << answer[i];
	cout << '>';
	return 0;
}