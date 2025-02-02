#include <iostream>
#include <algorithm>
using namespace std;

int arr[10000] = { 0, };

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int K, N;
    cin >> K >> N;

    long long sum = 0;

    for (int i = 0; i < K; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }

    sort(arr, arr + K);

    long long right = sum / N;
    long long left = 1;
    long long mid = 0;

    while (left <= right)
    {
        int count = 0;
        mid = (right + left) / 2;

        for (int i = 0; i < K; i++)
            count += arr[i] / mid;

        if (count >= N)
            left = mid + 1;
        else if (count < N)
            right = mid - 1;

    }

    cout << right;

    return 0;
}