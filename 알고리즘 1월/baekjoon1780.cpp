#include <iostream>
#include <vector>
using namespace std;


void CheckPaper(int N, int x, int y);

vector<vector<int>> v;
vector<int> t;

int Minus = 0;
int Zero = 0;
int Plus = 0;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        t.clear();
        for (int j = 0; j < N; j++)
        {
            int num;
            cin >> num;
            t.push_back(num);
        }
        v.push_back(t);
    }
  
    CheckPaper(N, 0, 0);
    cout << Minus << "\n" << Zero << "\n" << Plus;


    return 0;
}

void CheckPaper(int N, int x, int y)
{
    bool isUniform = true;
    int standard = v[x][y];
    for (int i = x; i < x+ N; i++)
    {
        for (int j = y; j < y + N; j++)
        {
            if (v[i][j] != standard)
            {
                isUniform = false;
                break;
            }
        }
        if (!isUniform)
            break;
    }

    if (isUniform)
    {
        switch (standard)
        {
            case -1:
                Minus++;
                return;
            case 0:
                Zero++;
                return;
            case 1:
                Plus++;
                return;
        }
    }

    if (N == 1)
        return;

    N /= 3;

    CheckPaper(N, x, y);
    CheckPaper(N, x, y + N);
    CheckPaper(N, x, y + 2 * N);

    CheckPaper(N, x + N, y);
    CheckPaper(N, x + N, y + N);
    CheckPaper(N, x + N, y + 2* N);

    CheckPaper(N, x + 2 * N, y);
    CheckPaper(N, x + 2 * N, y + N);
    CheckPaper(N, x + 2 * N, y + 2 * N);
}