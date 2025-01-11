#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool compare(pair<pair<int, string>, int> a, pair<pair<int, string>, int> b)
{
    if (a.first.first == b.first.first)
        return a.second < b.second;
    return a.first.first < b.first.first;
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;

    int age;
    string name;

    vector<pair<pair<int, string>, int>> v;

    for (int i = 0; i < N; i++)
    {
        cin >> age >> name;
        v.push_back({{age,name},i});
    }

    sort(v.begin(), v.end(), compare);

    for (int i = 0; i < N; i++)
    {
        cout << v[i].first.first << " ";
        cout << v[i].first.second << "\n";
    }

    return 0;
}