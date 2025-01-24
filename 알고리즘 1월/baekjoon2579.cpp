#include <iostream>

using namespace std;

int stair[301] = { 0, };
int dp_continue[301] = { 0, };
int dp_disContinue[301] = { 0, };

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cin.tie(NULL);

    int N;
    cin >> N;

    for (int i = 1; i <= N; i++)
        cin >> stair[i];

    dp_continue[1] = stair[1];
    dp_disContinue[1] = stair[1];

    for (int i = 2; i <= N; i++)
    {
        dp_continue[i] = dp_disContinue[i - 1] + stair[i];
        dp_disContinue[i] = stair[i] + max(dp_continue[i - 2], dp_disContinue[i - 2]);
    }

    int ans = max(dp_continue[N], dp_disContinue[N]);

    cout << ans;

    return 0;
}