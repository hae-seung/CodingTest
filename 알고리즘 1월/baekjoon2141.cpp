#include <iostream>
#include <algorithm>
#include <cmath>
#define ll long long

using namespace std;

pair<ll, ll> p[100000];

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cin.tie(NULL);

    int N;
    cin >> N;

    ll all = 0;

    for (int i = 0; i < N; i++)
    {
        cin >> p[i].first >> p[i].second;
        all += p[i].second;
    }

    sort(p, p + N);

    ll count = 0;

    for (int i = 0; i < N; i++)
    {
        count += p[i].second;
        if (count >= (ll)ceil(all / 2.0))
        {
            cout << p[i].first;
            break;
        }
    }

    return 0;
}
