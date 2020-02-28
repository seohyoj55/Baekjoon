#include <iostream>
using namespace std;

int primes[1000];

int Eratosthenes(int N, int K) {
	int flag = 0;
	int i, j;
	for (int i = 2; i < N + 1; i++)
		primes[i] = 1;

	for (i = 2; i <= N; i++)
		if (primes[i])
		{
			flag++;
			if (flag == K)
			{
				return i;
			}
			for (j = i; i * j <= N; j++)
			{
				if (primes[i * j])
				{
					primes[i * j] = 0;
					flag++;
					if (flag == K)
					{
						return i * j;
					}
				}
			}
		}
}
int main(void) {
	int N, K;
	cin >> N >> K;
	cout << Eratosthenes(N, K);
}
