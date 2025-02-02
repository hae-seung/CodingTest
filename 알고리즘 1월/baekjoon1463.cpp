#include <iostream>
using namespace std;

unsigned int dp[1000001] = { 0, };

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;

    dp[1] = 0;
    dp[2] = 1;

    for (int i = 3; i <= N; i++)
    {
        dp[i] = dp[i - 1] + 1;

        if (i % 3 == 0)
            dp[i] = min(dp[i / 3] + 1, dp[i]);

        if (i % 2 == 0)
            dp[i] = min(dp[i / 2] + 1, dp[i]);
    }

    cout << dp[N];


    return 0;
}