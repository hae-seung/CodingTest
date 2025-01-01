#include <iostream>
using namespace std;

bool arr[1000001] = { false, };

int main(void)
{
	int M, N;
	cin >> M >> N;

	for (int i = 2; i <= N; i++)
	{
		if (arr[i] == false)
		{
			if (i >= M)
				cout << i << "\n";

			for (int j = i; j <= N; j += i)
				arr[j] = true;
		}
	}
	
	return 0;
}