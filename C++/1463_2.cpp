#include <iostream>
#include <algorithm>
using namespace std;

long long d[1000001];

int main() {
	long long n;
	scanf("%lld", &n);
	for (int i = 0; i < n + 1; i++)
	{
		if (i <= 1)
			continue;
		else
			d[i] = d[i - 1];
		if (i % 3 == 0)
			if (d[i / 3] < d[i])
				d[i] = d[i / 3];
		if (i % 2 == 0)
			if (d[i / 2] < d[i])
				d[i] = d[i / 2];
		d[i]++;
	}
	printf("%lld", d[n]);
	
	return 0;
}