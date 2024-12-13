#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    int num;
    string too, answer;
    int minRange = 1, maxRange = 10;

    while (true) {
        cin >> num;
        if (num == 0)
            break;

        cin >> too >> answer;

        if (answer == "high")
        {
            if (num <= maxRange)
                maxRange = num - 1;
        }
        else if (answer == "low")
        {

            if (num >= minRange)
                minRange = num + 1;
        }
        else if (answer == "on")
        {

            if (num >= minRange && num <= maxRange)
                cout << "Stan may be honest\n";
            else
                cout << "Stan is dishonest\n";

            minRange = 1;
            maxRange = 10;
        }
    }

    return 0;
}
