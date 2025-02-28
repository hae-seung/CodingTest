#include <iostream>
#include <cmath>
using namespace std;

void Z(int len, int x, int y);

int N, r, c;
int num = 0;
int ans = 0;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> r >> c;

    int len = pow(2, N);

    Z(len, 0, 0);
    cout << ans;

    return 0;
}

void Z(int len, int x, int y)
{
    if (len == 2) //2*2�� ���� ��Ȳ
    {
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                if (x + i == r && y + j == c)
                    ans = num;
                num++;
            }
        }
        return;
    }

    //r�� c ���� �� ������ �����ִ��� Ȯ��

    int temp = len / 2;

    if (r >= x && r < x + len / 2 &&
        c >= y && c < y + len / 2)//�»�� ��
    {
        return Z(len / 2, x, y);
    }
    
    if (r >= x && r <  x + len / 2 &&
        c >= y + len / 2 && c < y + len)//���� ��
    {
        num += temp * temp;
        return Z(len / 2, x, y + len / 2);
    }

    if (r >= x + len / 2 && r < x + len &&
        c >= y && c < y + len / 2)//���ϴ� ��
    {
        num += len * temp;
        return Z(len / 2, x + len / 2, y);
    }

    if (r >= x + len / 2 && r < x + len &&
        c >= y + len / 2 && c < y + len)//���ϴ� ��
    {
        temp *= temp;
        num += temp * 3;
        return Z(len / 2, x + len / 2, y + len / 2);
    }
}