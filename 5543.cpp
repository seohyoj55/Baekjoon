#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int arr[5];
	int i;
	int burger, drink;

	for (i = 0; i < 5; i++)
		cin >> arr[i];
	burger = arr[0];
	
	for (i = 0; i < 2; i++)
		if (arr[i] > arr[i + 1])
			burger = arr[i + 1];
	drink = min(arr[3], arr[4]);

	cout << burger + drink - 50;
	return 0;
}