#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cin.tie(NULL);

    int N;
    cin >> N;

    int series = 0;
    int title = 666;

    while (true)
    {
        string s = to_string(title);
        
        if (s.find("666") != string::npos)
            series++;

        if (series == N)
            break;
        title++;
    }

    
    cout << title;


    return 0;
}