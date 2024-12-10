//���� 11404 Ư�� ����ã�� �����÷��̵�
#include <iostream>
#include <algorithm>
#define INF 100000000

using namespace std;

int arr[101][101];

int main(void) {

	int n, m;
	cin >> n;
	cin >> m;

	//�ʱ�ȭ
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			if (i == j)
				arr[i][j] = 0;
			else
				arr[i][j] = INF;
		}
	}

	//ä���
	int start, end, cost;

	for (int i = 0; i < m; i++) {
		cin >> start >> end >> cost;
		arr[start][end] = min(arr[start][end], cost);
	}

	for (int i = 1; i <= n; i++) {//�߰�����
		for (int j = 1; j <= n; j++) {//����
			for (int k = 1; k <= n; k++)//��
				arr[j][k] = min(arr[j][k], arr[j][i] + arr[i][k]);
		}
	}

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			if (arr[i][j] == INF)
				cout << 0 << ' ';
			else
				cout << arr[i][j] << ' ';
		}
		cout << "\n";
	}


	return 0;
}

