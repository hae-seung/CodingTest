#include <iostream>
#include <string>
#define Black 'B'
#define White 'W'
#define minValue 987654321

using namespace std;

char arr[50][50];

int PaintBoard(int i, int j, char Color);

int main(void)
{
    int N, M;
    cin >> N >> M;

    
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
            cin >> arr[i][j];
    }
    
    int minNum = minValue;
    for (int i = 0; i < N - 7; i++)
    {
        for (int j = 0; j < M - 7; j++)
        {
            char firstLineColor = arr[i][j];
            int num1 = PaintBoard(i, j, firstLineColor);
            minNum = min(num1, minNum);

            firstLineColor = (firstLineColor == Black) ? White : Black;
            int num2 = PaintBoard(i, j, firstLineColor);

            minNum = min(num2, minNum);
        }
    }

    cout << minNum;

    return 0;
}

int PaintBoard(int i, int j, char Color)
{
    char curColor = Color;
    int paintNum = 0;

    for (int row = i; row < i + 8; row++)
    {
        for (int col = j; col < j + 8; col++)
        {
            if (arr[row][col] == curColor)
            {
                curColor = (curColor == Black) ? White : Black;
            }
            else
            {
                curColor = (curColor == Black) ? White : Black;
                arr[row][col] = curColor;
                paintNum++;
            }
        }
        curColor = (curColor == Black) ? White : Black;
    }

    return paintNum;
}
