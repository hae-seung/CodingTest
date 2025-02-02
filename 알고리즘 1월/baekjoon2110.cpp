#include <iostream>
#include <algorithm>
#define ll long long
using namespace std;

int arr[200000] = { 0, };

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, C;
    cin >> N >> C;

    for (int i = 0; i < N; i++)
        cin >> arr[i];

    sort(arr, arr + N);

    ll left = 0, right = 0, mid = 0; //설치간격

    left = 1;
    right = arr[N - 1] - arr[0];

    int ans = 0;

    while (left <= right)
    {
        mid = (left + right) / 2;
        int router_count = 1;
        int target = arr[0];

        for (int i = 1; i < N; i++)
        {
            if (arr[i] - target >= mid)
            {
                router_count++;
                target = arr[i];
            }
        }

        if (router_count >= C)//간격이 너무 좁음
        {
            left = mid + 1;
            ans = mid;
        }
        else//간격이 너무 넓음
            right = mid - 1;
    }

    cout << ans;

    return 0;
}