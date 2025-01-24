#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

pair<int, int> p[500000] = { {0,0}, };

bool compare(pair<int, int> a, pair<int, int> b)
{
    if (a.second == b.second)
        return a.first < b.first;
    return a.second > b.second;
}


int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cin.tie(NULL);

    int N;

    cin >> N;

    for (int i = 0; i < N; i++)
        cin >> p[i].first;

    int sum = 0, mid = 0, most = 0, range = 0;
    float average = 0;

    sort(p, p + N);

    for (int i = 0; i < N; i++)
    {
        sum += p[i].first;
        p[i].second = 1;
    }

    average = (float)sum / N;
    average = round(average) + 0;

    mid = p[N / 2].first;
    range = p[N - 1].first - p[0].first;

    for (int i = 1; i < N; i++)
    {
        if (p[i].first == p[i - 1].first)
            p[i].second = p[i - 1].second + 1;
    }

    sort(p, p + N, compare);

    if (p[0].second != p[1].second)
        most = p[0].first;
    else
        most = p[1].first;


    cout << average << "\n" << mid <<
        "\n" << most << "\n" << range;

    return 0;
}