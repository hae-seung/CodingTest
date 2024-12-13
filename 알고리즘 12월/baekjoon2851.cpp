#include <iostream>
#include <cmath>
using namespace std;


int main(void)
{
	int arr[10] = { 0, };

	for (int i = 0; i < 10; i++)
		cin >> arr[i];


	int maxValue = 0;

	for (int i = 0; i < 10; i++)
	{
		int sum = 0;
		for (int j = 0; j <= i; j++)
		{
			sum += arr[j];

			if (abs(maxValue - 100) >= abs(sum - 100))
				maxValue = sum;
		}
	}


	cout << maxValue;

	return 0;
}