#include <iostream>
using namespace std;


int dp[1000][3] = { 0, };

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cin.tie(NULL);

    int N;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < 3; j++)
            cin >> dp[i][j];
    }

    for (int i = 1; i < N; i++)
    {
        dp[i][0] += min(dp[i - 1][1], dp[i - 1][2]);
        dp[i][1] += min(dp[i - 1][0], dp[i - 1][2]);
        dp[i][2] += min(dp[i - 1][0], dp[i - 1][1]);
    }


    int min_price = dp[N - 1][0];

    for (int j = 0; j < 3; j++)
        min_price = min(min_price, dp[N - 1][j]);


    cout << min_price;

    return 0;
}