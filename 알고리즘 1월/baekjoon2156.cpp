#include <iostream>
#include <algorithm>
using namespace std;

int wine[10001] = { 0, };
int dp[10001] = { 0, };

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cin.tie(NULL);

    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
        cin >> wine[i];

    dp[1] = wine[1];
    dp[2] = wine[1] + wine[2];

    for (int i = 3; i <= n; i++)
        dp[i] = max({ dp[i - 1], wine[i] + wine[i - 1] + dp[i - 3], wine[i] + dp[i - 2] });

    int ans = dp[0];
    for (int i = 1; i <= n; i++)
        ans = max(ans, dp[i]);
    cout << ans;

    return 0;
}