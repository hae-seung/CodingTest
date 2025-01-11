#include <iostream>
#include <algorithm>
using namespace std;

int box[1000] = { 0, };

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cin.tie(NULL);

    int T, J, N, count;
    cin >> T;

    for (int i = 0; i < T; i++)
    {
        count = 0;
        cin >> J >> N;
        for (int j = 0; j < N; j++)
        {
            int R, C;
            cin >> R >> C;
            box[j] = R * C;
        }

        sort(box, box + N);


        for (int k = N- 1; k >=0; k--)
        {
            J -= box[k];
            count++;

            if(J<=0)
                break;
        }

        cout << count << "\n";
    }

    return 0;
}