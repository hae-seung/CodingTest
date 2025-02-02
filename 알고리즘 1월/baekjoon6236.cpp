#include <iostream>
using namespace std;

int arr[100000] = { 0, };

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M;
    cin >> N >> M;


    int left = 0, right = 0;
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
        right += arr[i];
        left = max(arr[i], left);
    }


    int mid = 0;

    int withdrawCount = 0;
    int curMoney = 0;
    int ans = 0;

    while (left <= right)
    {
        withdrawCount = 1;
        mid = (left + right) / 2;

        curMoney = mid;



        for (int i = 0; i < N; i++)
        {
            if (curMoney - arr[i] >= 0)
                curMoney -= arr[i];
            else
            {
                withdrawCount++;
                curMoney = mid - arr[i];
            }
        }


        if (withdrawCount <= M)
        {
            right = mid - 1;
            ans = mid;
        }
        else
            left = mid + 1;
    }

    cout << ans;

    return 0;
}