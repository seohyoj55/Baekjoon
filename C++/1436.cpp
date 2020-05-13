#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>

using namespace std;

int main(void)
{
	int cnt = 0, N, i=666;

	cin >> N;

	while (cnt < N)
	{
		auto s = to_string(i);
		if (s.find("666") != string::npos)
		{
			cnt++;
			if (cnt == N)
			{
				cout << s << endl;
				break;
			}
		}
		i++;
	}

	return 0;
}