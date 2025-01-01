#include <iostream>
#include <list>
using namespace std;

int main(void)
{
    int T;
    cin >> T;

    list<char> l;
    string s;

    for (int i = 0; i < T; i++)
    {
        l.clear();
        auto it = l.begin();
        cin >> s;

        for (char c : s)
        {
            if (c == '<')
            {
                if (it != l.begin())
                    it--;
            }
            else if (c == '>')
            {
                if (it != l.end())
                    it++;
            }
            else if (c == '-')
            {
                if (it != l.begin())
                    it = l.erase(--it);
            }
            else
            {
                l.insert(it, c); 
            }
        }

        for (char c : l)
        {
            cout << c;
        }
        cout << "\n";
    }

    return 0;
}
