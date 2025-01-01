#include <iostream>

using namespace std;

int arr[100] = { 0, };

int GetGCD(int a, int b);

int main(void)
{
	int t;
	cin >> t;

	int n;
	long long sum = 0;
	for (int i = 0; i < t; i++)
	{
		cin >> n;
		sum = 0;
		for (int q = 0; q < n; q++)
			cin >> arr[q];

		for (int j = 0; j < n - 1; j++)
		{
			for (int k = j + 1; k < n; k++)
				sum += GetGCD(arr[j], arr[k]);
		}

		cout << sum << "\n";
	}
	

	
	return 0;
}

int GetGCD(int a, int b)
{
	if (a < b)
		swap(a, b);

	if (a % b != 0)
		return GetGCD(b, a % b);
	else
		return b;
}