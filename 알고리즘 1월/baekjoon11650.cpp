#include <iostream>
#include <algorithm>
using namespace std;

pair<int, int> p[100000];

bool compare(pair<int, int>a, pair<int, int>b)
{
    if (a.first == b.first)
        return a.second < b.second;
    return a.first < b.first;
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;

    int a, b;

    for (int i = 0; i < N; i++)
        cin >> p[i].first >> p[i].second;

    sort(p, p + N, compare);

    for (int i = 0; i < N; i++)
        cout << p[i].first << " " << p[i].second << "\n";

    return 0;
}