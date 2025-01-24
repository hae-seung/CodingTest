#include <iostream>
#include <vector>
using namespace std;


int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    int n, k;
    cin >> n >> k;

    vector<vector<int>>v;

    vector<int> t;

    t.push_back(1);
    v.push_back(t);

    for (int i = 1; i <= n; i++)//n¹ø ¹Ýº¹
    {
        t.clear();
        for (int j = 0; j <= i; j++)
        {
            if (j == 0 || j == i)
                t.push_back(1);
            else
                t.push_back(v[i - 1][j - 1] + v[i - 1][j]);
        }
        v.push_back(t);
    }
    
    cout << v[n-1][k-1];


    return 0;
}