#include <iostream>
#define ll long long
using namespace std;

int arr[10000] = { 0, };

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    ll M;
    cin >> N;

    ll sum = 0;
    int max_price = 0;

    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
        sum += arr[i];
        max_price = max(max_price, arr[i]);
    }
    cin >> M;

    if (sum <= M)
    {
        cout << max_price;
        return 0;
    }

    int left, right, mid;
    left = 1;
    right = max_price;
    int ans = 0;
    
    while (left <= right)
    {
        mid = (left + right) / 2;
        sum = 0;

        for (int i = 0; i < N; i++)
        {
            if (arr[i] >= mid)
                sum += mid;
            else
                sum += arr[i];
        }

        if (sum > M)//상한선이 너무 높음
        {
            right = mid - 1;
        }
        else//상한선이 너무 낮음
        {
            left = mid + 1;
            ans = max(ans, mid);
        }
    }

    cout << ans;


    return 0;
}