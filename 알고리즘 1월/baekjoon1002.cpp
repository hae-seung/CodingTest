#include <iostream>
#include <cmath>

using namespace std;

typedef struct Point {
    int x, y, r;
} point;

int CheckCircle(point a, point b);

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T;
    cin >> T;

    for (int i = 0; i < T; i++)
    {
        point jo, baek;
        cin >> jo.x >> jo.y >> jo.r;
        cin >> baek.x >> baek.y >> baek.r;

        int check = CheckCircle(jo, baek);
        cout << check << "\n";
    }

    return 0;
}

int CheckCircle(point a, point b)
{
    // �߽� �� �Ÿ��� ����
    int rangeTwoPoint = pow(a.x - b.x, 2) + pow(a.y - b.y, 2);
    // ������ ���� ����
    int sumRadiusSq = pow(a.r + b.r, 2);
    // ������ ���� ����
    int diffRadiusSq = pow(abs(a.r - b.r), 2);

    // �߽��� ���� ���
    if (rangeTwoPoint == 0) 
    {
        if (a.r == b.r) 
            return -1; // ������ ��ħ
        return 0;// ����
    }

    // �ܺο��� ����
    if (rangeTwoPoint == sumRadiusSq) return 1;

    // ���ο��� ����
    if (rangeTwoPoint == diffRadiusSq) return 1;

    // �� ���� ��ħ
    if (diffRadiusSq < rangeTwoPoint && rangeTwoPoint < sumRadiusSq) return 2;

    // �� �� (�� ����)
    return 0;
}
