#include <iostream>
#include <algorithm>
using namespace std;

int arr[10001] = { 0, };

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;

    int num;
    for (int i = 0; i < N; i++)
    {
        cin >> num;
        arr[num]++;
    }

    for (int i = 1; i <= 10000; i++)
    {
        int count = arr[i];
        for (int j = 0; j < count; j++)
            cout << i << "\n";
    }


    return 0;
}