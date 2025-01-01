#include <iostream>
using namespace std;

bool arr[1001] = { false, };

int main(void)
{
	int N, K;
	cin >> N >> K;

	int count = 0;

	for (int i = 2; i <= N; i++)
	{
		if (arr[i] == false)//지우기 시작
		{
			for (int j = i; j <= N; j += i)
			{
				if (arr[j] == true)
					continue;

				arr[j] = true;
				count++;
				if (count == K)
				{
					cout << j;
					return 0;
				}
			}
		}
	}



	
	return 0;
}