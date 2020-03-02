#include <iostream>
#include <algorithm>
using namespace std;

struct conf {
	int start;
	int end;
};

bool compare(const conf& p1, const conf& p2) {
	if (p1.end < p2.end) {
		return true;
	}
	else if (p1.end == p2.end)
	{
		return p1.start < p2.start;
	}
	else {
		return false;
	}
}

int main() {
	int N, i;
	int index = 0;
	int End = 0;

	cin >> N;
	conf* C = new conf[N];
	for (i = 0; i < N; i++)
		cin >> C[i].start >> C[i].end;

	sort(C, C + N, compare);

	//for (i = 0; i < N; i++)
		//cout << C[i].start << " " << C[i].end << endl;
	//cout << endl;

	for (i = 0; i < N; i++)
	{
		if (End <= C[i].start)
		{
			//cout << C[i].start << " " << C[i].end << endl;
			index++;
			End = C[i].end;
		}
		//cout << endl;
	}

	cout << index << endl;
	delete[] C;
	return 0;
}