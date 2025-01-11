#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool compare(int a, int b)
{
    return a > b;
}


int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;

    vector<int> v;

    while (N != 0)
    {
        v.push_back(N % 10);
        N /= 10;
    }

    sort(v.begin(), v.end(), compare);

    for (int c : v)
        cout << c;

    
    return 0;
}