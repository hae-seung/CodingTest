#include <iostream>
#include <algorithm>
#define ll long long
using namespace std;

int arr[1000000] = { 0, };

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N, M;
    cin >> N >> M;

    ll sum = 0;
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    
    sort(arr, arr + N);

    ll left = 1;
    ll right = arr[N -1];

    int mid = 0; // left + right가 최대 11억/2 => 5억
    ll wood = 0; //10억 - 5억이 10만개만 int overflow
    int ans = 0;

    while (left <= right)
    {
        wood = 0;
        mid = (left + right) / 2;
     
        for (int i = 0; i < N; i++)
            wood += arr[i] <= mid ? 0 : arr[i] - mid;

        if (wood >= M)
        {
            left = mid + 1;
            ans = mid;
        }
        else
            right = mid - 1;
    }

    cout << ans;
    return 0;
}