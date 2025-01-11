#include <iostream>
using namespace std;

int dp[100001] = { 0, };

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
        cin >> dp[i];

    for (int i = 2; i <= n; i++)
        dp[i] = max(dp[i - 1] + dp[i], dp[i]);

    int max_num = -1000;
    for (int i = 1; i <= n; i++)
        max_num = max(max_num, dp[i]);

    cout << max_num;

    return 0;
}