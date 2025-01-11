#include <iostream>
using namespace std;


int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cin.tie(NULL);

    int Money;
    cin >> Money;

    int m = 1000 - Money;

    int change[6] = { 500, 100, 50, 10, 5, 1 };

    int coin = 0;

    for (int i = 0; i < 6; i++)
    {
        if (m / change[i] != 0)
        {
            coin += m / change[i];
            m %= change[i];
        }
    }

    cout << coin;

    return 0;
}