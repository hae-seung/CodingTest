#include <iostream>

using namespace std;

int arr[1000001] = { 0, };//ó���� 0���� ���� �ʱ�ȭ

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;

    for (int i = 2; i <= 1000000; i++)
    {
        if (arr[i] == 0)
        {
            for (int j = i; j <= 1000000; j += i)
                arr[j] = 2;//�Ҽ��� �ƴѰ�
            arr[i] = 1;//�Ҽ��� ��
        }
    }

    while (true)
    {
        cin >> n;
        if (n == 0)
            break;

        bool flag = false;

        for (int i = 2; i <= n/2; i++) //���ݱ����� ���� ��
        {
            if (arr[i] == 1 && arr[n - i] == 1)
            {
                cout << n << " = "<< i << " + " << n - i << "\n";
                flag = true; 
                break;
            }
        }

        if(!flag)
            cout << "Goldbach's conjecture is wrong\n";
    }



    
    return 0;
}