#include <iostream>
#include <algorithm>
using namespace std;

int arr[1000] = { 0, };
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cin.tie(NULL);

   
    int N;
    cin >> N;

    for (int i = 0; i < N; i++)
        cin >> arr[i];

    sort(arr, arr + N);

    for (int i = 1; i < N; i++)
        arr[i] += arr[i - 1];

    int sum = 0;
    for (int i = 0; i < N; i++)
        sum += arr[i];

    cout << sum;


    return 0;
}