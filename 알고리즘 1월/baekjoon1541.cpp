#include <iostream>
#include <string>
using namespace std;


int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cin.tie(NULL);

    string s = "";
    cin >> s;

    int sum = 0;
    string num = "";

    bool isMinus = false;

    for (int i = 0; i <= s.length(); i++)
    {
        if (s[i] == '-' || s[i] == '+' || i == s.length())
        {
            if (isMinus)
                sum -= stoi(num);
            else
                sum += stoi(num);

            num.clear();

            if (s[i] == '-')
                isMinus = true;
        }
        else
            num += s[i];
    }

    cout << sum;

    return 0;
}