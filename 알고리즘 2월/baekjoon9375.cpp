#include <iostream>
#include <map>
#include <vector>
#include <string>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T, n;
    cin >> T;

    map<string, vector<string>> m;

    string dress, type;

    for (int i = 0; i < T; i++)
    {
        cin >> n;
        m.clear();
        for (int j = 0; j < n; j++)
        {
            cin >> dress >> type;
            m[type].push_back(dress);
        }

        int total = 1;

        int size = 0;
        for (auto l : m)
        {
            size = l.second.size() + 1;
            total *= size;
        }

        cout << total - 1<<"\n";
    }
    

    return 0;
}