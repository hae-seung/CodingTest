#include <iostream>
#include <vector>
using namespace std;

char arr[101][101];

int main(void)
{
	int R, C;
	cin >> R >> C;

	for (int i = 1; i <= R; i++)
	{
		for (int j = 1; j <= C; j++)
			cin >> arr[i][j];
	}

	int A, B;
	cin >> A >> B;

	for (int i = 1; i <= R; i++)//오른 위 대칭부터
	{
		for (int j = C + 1, k = C; j <= 2 * C && k >= 1; j++, k--)
			arr[i][j] = arr[i][k];
	}


	for (int i = R + 1, k = R; i <= 2 * R && k >= 1; i++, k--) //아래 대칭
	{
		for (int j = 1; j <= 2 * C; j++)
			arr[i][j] = arr[k][j];
	}

	if (arr[A][B] == '#')
		arr[A][B] = '.';
	else
		arr[A][B] = '#';



	for (int i = 1; i <= 2 * R; i++)
	{
		for (int j = 1; j <= 2 * C; j++)
			cout << arr[i][j];
		cout << "\n";
	}

	return 0;
}