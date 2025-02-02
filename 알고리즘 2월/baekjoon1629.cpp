#include <iostream>
using namespace std;

long long Modular(int A, int B, int C);

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int A, B, C;
    cin >> A >> B >> C;

    cout << Modular(A, B, C);

    return 0;
}

long long Modular(int A, int B, int C)
{
    if (B == 1)
        return A % C;

    long long temp = Modular(A, B / 2, C);
    temp = (temp * temp) % C;

    if (B % 2 == 0)
        return temp;
    else
        return (A * temp) % C;
}
