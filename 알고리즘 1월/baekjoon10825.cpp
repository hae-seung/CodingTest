#include <iostream>
#include <vector>
#include <algorithm>

#define Korea 0
#define English 1
#define Math 2

using namespace std;


bool compare(pair<string, vector<int>>& a, pair<string, vector<int>>& b)
{
    if (a.second[Korea] == b.second[Korea] &&
        a.second[English] == b.second[English] &&
        a.second[Math] == b.second[Math])
        return a.first < b.first;

    if (a.second[Korea] == b.second[Korea] &&
        a.second[English] == b.second[English])
        return a.second[Math] > b.second[Math];

    if (a.second[Korea] == b.second[Korea])
        return a.second[English] < b.second[English];

    return a.second[Korea] > b.second[Korea];
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cin.tie(NULL);

    int N;
    cin >> N;

    string name;
    int subject;

    vector<pair<string, vector<int>>> v;

    vector<int> scores;

    for (int i = 0; i < N; i++)
    {
        scores.clear();
        cin >> name;
        for (int j = 0; j < 3; j++)
        {
            cin >> subject;
            scores.push_back(subject);
        }
        v.push_back({ name, scores });
    }

    sort(v.begin(), v.end(), compare);


    for (int i = 0; i < N; i++)
        cout << v[i].first << "\n";

    return 0;
}