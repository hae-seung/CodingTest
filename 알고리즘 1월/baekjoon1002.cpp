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
    // 중심 간 거리의 제곱
    int rangeTwoPoint = pow(a.x - b.x, 2) + pow(a.y - b.y, 2);
    // 반지름 합의 제곱
    int sumRadiusSq = pow(a.r + b.r, 2);
    // 반지름 차의 제곱
    int diffRadiusSq = pow(abs(a.r - b.r), 2);

    // 중심이 같은 경우
    if (rangeTwoPoint == 0) 
    {
        if (a.r == b.r) 
            return -1; // 완전히 겹침
        return 0;// 포함
    }

    // 외부에서 접함
    if (rangeTwoPoint == sumRadiusSq) return 1;

    // 내부에서 접함
    if (rangeTwoPoint == diffRadiusSq) return 1;

    // 두 원이 겹침
    if (diffRadiusSq < rangeTwoPoint && rangeTwoPoint < sumRadiusSq) return 2;

    // 그 외 (안 만남)
    return 0;
}
