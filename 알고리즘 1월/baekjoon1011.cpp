#include <iostream>
#include <cmath>
using namespace std;

int Calculate(int x, int y);

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

  
    int T;
    cin >> T;

    int x, y;
    for (int i = 0; i < T; i++)
    {
        cin >> x >> y;
        cout << Calculate(x, y) <<"\n";
    }

    return 0;
}

int Calculate(int x, int y)
{
    int distance = y - x;

    int d = sqrt(distance);

    int count = 0;

    if (d * d == distance)
        count = 2 * d - 1;
    else 
    {
        long long a = d * d;
        long long b = (d + 1) * (d + 1);
        if ((a+b)/2 < distance)
            count = 2 * d + 1;
        else
            count = 2 * d;
    }
    
    return count;
}