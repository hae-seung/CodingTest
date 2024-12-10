//���α׷��ӽ� ����
#include <vector>

using namespace std;

bool check[101][101] = { false, };

int solution(int n, vector<vector<int>> results) {

    for (int i = 0; i < results.size(); i++)
        check[results[i][0]][results[i][1]] = true;

    for (int k = 1; k <= n; k++)//�߰���������
    {
        for (int i = 1; i <= n; i++)//���� = �¸���
        {
            for (int j = 1; j <= n; j++)//���� = �й���
            {
                if (check[i][k] && check[k][j])
                {
                    check[i][j] = true;
                }
            }
        }
    }

    int count = 0;
    int answer = 0;
    for (int i = 1; i <= n; i++)
    {
        count = 0;
        for (int j = 1; j <= n; j++)
        {
            if (check[i][j] || check[j][i])//1���� ���ڰ� ���� �̱�� ����� ���� n-1�� ������ ���� Ȯ��
                count++;
        }
        if (count == n - 1)
            answer++;
    }
    return answer;
}