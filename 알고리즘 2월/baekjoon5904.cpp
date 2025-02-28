#include <iostream>
#include <string>
using namespace std;

void Moo(int N, int k, int total);


int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;

    int k = 1;
    int total = 3;

    while (total < N)
    {
        k++;
        total *= 2;
        total += k + 2;
    }

    Moo(N, k , total);


    return 0;
}

void Moo(int N, int k, int total)
{
    int prev_total = total - (k + 2);
    prev_total /= 2;

    if (N >= prev_total + 1 && N <= prev_total + k + 2)
    {
        if (N == prev_total + 1)
        {
            //m
            cout << "m";
            return;
        }
        else
        {
            //o
            cout << "o";
            return;
        }
    }
    else if (N > prev_total + k + 2)
    {
        Moo(N - (prev_total + k + 2), k - 1, prev_total);
    }
    else if (N < prev_total + k + 2)
    {
        Moo(N, k - 1, prev_total);
    }
}