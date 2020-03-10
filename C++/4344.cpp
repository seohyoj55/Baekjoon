#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


int main() {
	int N, t, i, j, temp;
	double sum, avg, flag;
	vector<int> arr;

	cin >> N;

	for (i = 0; i < N; i++)
	{
		sum = 0;
		flag = 0;
		arr.clear();
		cin >> t;
		for (j = 0; j < t; j++)
		{
			cin >> temp;
			arr.push_back(temp);
			sum += temp;
		}
		avg = sum / t;
		for (j = 0; j < t; j++)
			if (arr[j] > avg)
				flag++;
		cout << fixed;
		cout.precision(3);
		cout << (flag / t) * 100 << '%' << endl;
	}

	return 0;
}