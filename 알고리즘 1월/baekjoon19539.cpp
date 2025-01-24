#include <iostream>
using namespace std;

int arr[100001] = { 0, };

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cin.tie(NULL);

    int N;
    cin >> N;

    int sum = 0;

    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }

    if (sum % 3 != 0)
    {
        cout << "NO";
        return 0;
    }

    int two_count = 0;
    int one_count = 0;

    for (int i = 0; i < N; i++)
    {
        two_count += arr[i] / 2;
        one_count += arr[i] % 2;
    }

    if (one_count > two_count)
        cout << "NO";
    else
        cout << "YES";


    return 0;
}