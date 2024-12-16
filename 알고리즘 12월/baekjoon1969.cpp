#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string arr[1000];

int main(void)
{
    int N, M;
    cin >> N >> M;

    for (int i = 0; i < N; i++)
        cin >> arr[i];

    int sum = 0;
    string DNA = "";

    for (int i = 0; i < M; i++)
    {
        int count[4] = { 0, };
        int maxNum = 0;

        for (int j = 0; j < N; j++)
        {
            if (arr[j][i] == 'A')
                count[0]++;
            else if (arr[j][i] == 'C')
                count[1]++;
            else if (arr[j][i] == 'G')
                count[2]++;
            else if (arr[j][i] == 'T')
                count[3]++;
        }
        maxNum = max({ maxNum, count[0], count[1], count[2],count[3] });
        sum += N - maxNum;

        char DNA_alpha;
        if (maxNum == count[0])
            DNA_alpha = 'A';
        else if (maxNum == count[1])
            DNA_alpha = 'C';
        else if (maxNum == count[2])
            DNA_alpha = 'G';
        else
            DNA_alpha = 'T';
        
        DNA += DNA_alpha;
    }

    cout << DNA << "\n";
    cout << sum;


    return 0;
}