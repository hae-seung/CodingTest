#include <iostream>
#include <list>
using namespace std;

int main(void)
{
    string s;
    cin >> s;

    int M;
    cin >> M;

    char c, word;
    list<char> l;
    list<char>::iterator it = l.begin();

    for (int i = 0; i < s.length(); i++)
        l.push_back(s[i]);


    for (int i = 0; i < M; i++)
    {
        cin >> c;
        if (c == 'P')
        {
            cin >> word;
            l.insert(it, word);
        }
        else if (c == 'L')
        {
            if (it != l.begin())
                it--;
        }
        else if (c == 'D')
        {
            if (it != l.end())
                it++;
        }
        else
        {
            if (it != l.begin())
                it = l.erase(--it);
        }
    }

    for (char c : l)
        cout << c;

    return 0;
}
