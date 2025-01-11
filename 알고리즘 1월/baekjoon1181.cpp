#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool compare(string a, string b)
{
    if (a.length() == b.length())
        return a < b;
    return a.length() < b.length();
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;

    vector<string> v(N);

    for (int i = 0; i < N; i++)
        cin >> v[i];

    sort(v.begin(), v.end(), compare);

    v.erase(unique(v.begin(), v.end()), v.end());


    for (string c : v)
        cout << c << "\n";

    return 0;
}