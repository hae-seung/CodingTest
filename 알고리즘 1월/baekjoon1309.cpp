#include <iostream>
using namespace std;

int dp[100001] = { 0, };

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cin.tie(NULL);

    int n;
    cin >> n;

    dp[1] = 3;
    dp[2] = 7;

    for (int i = 3; i <= n; i++)
        dp[i] = (dp[i - 2] + dp[i - 1] * 2) % 9901;

    cout << dp[n];


    return 0;
}