#include <iostream>
#include <algorithm>
#include <deque>
#include <string>
using namespace std;

int main() {
	int N;
	int i;
	int temp;
	string com;
	deque<int> deq;

	cin >> N;
	for (i = 0; i < N; i++)
	{
		cin >> com;
		if (com.compare("push_front") == 0) {
			cin >> temp;
			deq.push_front(temp);
		}
		else if (com.compare("push_back") == 0) {
			cin >> temp;
			deq.push_back(temp);
		}
		else if (com.compare("pop_front") == 0) {
			if (deq.empty())
				cout << -1 << endl;
			else
			{
				cout << deq.front() << endl;
				deq.pop_front();
			}
		}
		else if (com.compare("pop_back") == 0) {
			if (deq.empty())
				cout << -1 << endl;
			else
			{
				cout << deq.back() << endl;
				deq.pop_back();
			}
		}
		else if (com.compare("size") == 0) {
			cout << deq.size() << endl;
		}
		else if (com.compare("empty") == 0) {
			cout << deq.empty() << endl;
		}
		else if (com.compare("front") == 0) {
			if (deq.empty())
				cout << -1 << endl;
			else
			{
				cout << deq.front() << endl;
			}
		}
		else if (com.compare("back") == 0) {
			if (deq.empty())
				cout << -1 << endl;
			else
			{
				cout << deq.back() << endl;
			}
		}
	}

	return 0;
}