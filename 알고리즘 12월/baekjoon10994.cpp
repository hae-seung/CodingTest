#include <iostream>

using namespace std;

int Star[500][500] = { 0, };

void FillStar(int index, int len);

int main(void)
{
	int N;
	cin >> N;

	int len = 1 + 4 * (N - 1);

	FillStar(0, len);

	for (int i = 0; i < len; i++)
	{
		for (int j = 0; j < len; j++)
		{
			if (Star[i][j] == 1)
				cout << '*';
			else
				cout << " ";
		}
		cout << "\n";
	}

	return 0;
}

void FillStar(int index, int len)
{
	if (len < 0)
		return;

	for (int k = 0; k < len; k++)
	{
		Star[index + k][index] = 1;//왼쪽 세로줄
		Star[index][index + k] = 1;//위쪽 가로줄
		Star[index + k][index + len - 1] = 1;//오른쪽 세로줄
		Star[index + len - 1][index + k] = 1;//아래쪽 가로줄
	}

	index += 2;
	len -= 4;
	FillStar(index, len);
}