#include <iostream>
#define blue 1
#define white 0

using namespace std;

int paper[128][128] = { {0,0}, };

void CheckPaper(int len, int x, int y);

int White = 0;
int Blue = 0;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
            cin >> paper[i][j];
    }

    CheckPaper(N, 0, 0); 
    cout << White << "\n" << Blue;

    return 0;
}

void CheckPaper(int len, int x, int y)
{
    int standard = paper[x][y];
    bool isUniform = true;

    for (int i = x; i < x + len; i++)
    {
        for (int j = y; j < y + len; j++)
        {
            if (paper[i][j] != standard)
            {
                isUniform = false;
                break;
            }
        }
        if (!isUniform) break;
    }

    if (isUniform)
    {
        standard == white ? White++ : Blue++;
        return;
    }

    if (len == 1) 
        return;

    int half = len / 2;

    CheckPaper(half, x, y);           // 좌상단
    CheckPaper(half, x, y + half);     // 우상단
    CheckPaper(half, x + half, y);     // 좌하단
    CheckPaper(half, x + half, y + half); // 우하단
}
