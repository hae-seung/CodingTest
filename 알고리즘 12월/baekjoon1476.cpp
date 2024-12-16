#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(void)
{
    int E, S, M;
    cin >> E >> S >> M;
    
    int Earth = 1;
    int Sun = 1;
    int Moon = 1;
    
    int Year = 1;
    while (true)
    {
        if (Earth == E && Sun == S && Moon == M)
            break;

        Earth++;
        Sun++;
        Moon++;
        Year++;
        
        if (Earth > 15)
            Earth = 1;
        if (Sun > 28)
            Sun = 1;
        if (Moon > 19)
            Moon = 1;
    }

    cout << Year;


    return 0;
}