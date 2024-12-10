#include <iostream>
using namespace std;

int parent_[10001];
bool visit[10001];

int main(void)
{
	int T, N;
	int a, b;
	int node1, node2;

	cin >> T;
	for (int i = 0; i < T; i++)
	{
		cin >> N;
		
		for (int j = 1; j <= N; j++)
		{
			visit[j] = false;
			parent_[j] = 0;//�ڽ��� �θ�� ��� 0���� �ʱ�ȭ
		}

		for (int j = 1; j < N; j++)
		{
			cin >> a >> b;
			parent_[b] = a;//b�� �θ�� a �ǹ�
		}

		cin >> node1 >> node2;

		visit[node1] = true;

		int root = 0;

		while (node1 != root)//��Ʈ ����� �θ�� 0��<������ �ʴ� ��>
		{
			node1 = parent_[node1];
			visit[node1] = true;
		}

		while (true)
		{
			if (visit[node2] == true)
			{
				cout << node2<<"\n";
				break;
			}
			node2 = parent_[node2];
		}
	}

	return 0;
}