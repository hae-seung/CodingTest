#include <iostream>

using namespace std;

int arr[1001];

int main(void)
{
    int A, B;
    cin >> A >> B;

    int count = 0;
    for (int index = 1; index <= 1000; index += count)
    {
        count++;
        for (int j = index; j < index + count; j++)
            arr[j] = count;
    }

    int sum = 0;
    for (int i = A; i <= B; i++)
        sum += arr[i];

    cout << sum;

    return 0;
}