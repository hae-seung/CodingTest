#include <iostream>

using namespace std;

int arr[10] = { 0, };

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cin.tie(NULL);

    int N, K;
    cin >> N >> K;

    for (int i = 0; i < N; i++)
        cin >> arr[i];

    int coin = 0;

    for (int i = N - 1; i >= 0; i--)
    {
        if (arr[i] > K)
            continue;

        coin += K / arr[i];
        K %= arr[i];
    }

    cout << coin;

    return 0;
}