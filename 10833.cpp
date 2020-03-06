#include <iostream>
using namespace std;

int main() {
	int N;
	int i;
	int student, apple, sum = 0;

	cin >> N;

	for (i = 0; i < N; i++)
	{
		cin >> student >> apple;
		sum += apple % student;
	}
	cout << sum << endl;

	return 0;
}