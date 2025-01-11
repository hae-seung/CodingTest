#include <iostream>
#include <algorithm>
#include <set>
using namespace std;

int arr[101] = { 0, };


int GCD(int a, int b);

int main(void)
{
    int N;
    cin >> N;

    for (int i = 1; i <= N; i++)
        cin >> arr[i];

    sort(arr, arr + N);

    int M = arr[2] - arr[1];
    
    for (int i = 2; i <= N; i++)
        M = GCD(M, arr[i] - arr[i - 1]);

    set<int> s;
    
    int temp = M;

    for (int i = 1; i <= temp; i++)
    {
        if (M % i == 0)
        {
            s.insert(i);
            s.insert(M / i);
            temp = M / i;
        }
    }

    s.erase(s.begin());

    for (int i : s)
        cout << i << " ";

    return 0;
}

int GCD(int a, int b)
{
    if (b == 0)
        return a;

    return GCD(b, a % b);
}