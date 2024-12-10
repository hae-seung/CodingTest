#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;

void MakeWall(int arr[8][8], int Wallcount, int row, int col);
void FillVirus(int arr[8][8]);
void CountZone(int copy[8][8]);
void Spread(int copy[8][8], int x, int y);

queue<pair<int, int>> q;

int MAX = 0;
int N, M;

int main(void)
{
	cin >> N >> M;

	int arr[8][8] = { 0, };

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
			cin >> arr[i][j];
	}
	int RemainWall = 3;
	int row = 0;
	int col = 0;
	MakeWall(arr, RemainWall, row, col);
	cout << MAX;

	return 0;
}

void Spread(int copy[8][8], int x, int y)
{
	
	if (x < 0 || x >= N || y < 0 || y >= M)
		return;
	
	if (copy[x][y] == 0)
	{
		copy[x][y] = 2;
		q.push({ x,y });
	}
}

void FillVirus(int arr[8][8])
{
	int copy[8][8];

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			copy[i][j] = arr[i][j];
			if (copy[i][j] == 2)
				q.push({ i,j });
		}
	}

	while (!q.empty())
	{
		int x = q.front().first;
		int y = q.front().second;
		
		q.pop();

		Spread(copy, x + 1, y);
		Spread(copy, x - 1, y);
		Spread(copy, x, y - 1);
		Spread(copy, x, y + 1);
	}

	CountZone(copy);
}

void CountZone(int copy[8][8])
{
	int count = 0;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			if (copy[i][j] == 0)
				count++;
		}
	}
	MAX = max(MAX, count);
}

void MakeWall(int arr[8][8], int Wallcount, int row, int col)
{
	int Remain = Wallcount;
	if (Remain == 0)//���� �� ���� ����� �õ�
	{
		FillVirus(arr);
		return;
	}
	

	//0�� ������ ã�� ���� ��, ���� �ٿ��� ��ĭ �Ʒ��� �������� ã�ƾ� �Ҷ�
	//j���� 0�� �Ǿ�� �Ѵ�. �ȱ׷��� ���� �߰����� ã�� �����ϸ� �߰����� j������
	//�Ĵٵ� �Ⱥ��� ��Ȳ �߻�
	for (int i = row; i < N; i++)
	{
		for (int j = (i == row ? col : 0); j < M; j++)
		{
			if (arr[i][j] == 0)
			{
				arr[i][j] = 1;
				Wallcount = Remain - 1;
				MakeWall(arr, Wallcount, i, j);
				arr[i][j] = 0;
			}
		}
	}
}