#include <iostream>
using namespace std;


int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int T;
    cin >> T;

    int n;

    pair<int, int> p[41];
    p[0].first = 1;
    p[0].second = 0;

    p[1].first = 0;
    p[1].second = 1;


    for (int i = 2; i <= 40; i++)
    {
        p[i].first = p[i - 1].first + p[i - 2].first;
        p[i].second = p[i - 1].second + p[i - 2].second;
    }

    for (int i = 0; i < T; i++)
    {
        cin >> n;
        cout << p[n].first << " " << p[n].second << "\n";
    }

    return 0;
}