#include <iostream>
using namespace std;

int arr[10000] = { 0, };

int main(void)
{
	int N;
	cin >> N;

	string command = "";
	int num;

	int size = -1;

	for (int i = 0; i < N; i++)
	{
		cin >> command;
		if (command == "push")
		{
			cin >> num;
			if (size < 10000)//!max
			{
				size++;
				arr[size] = num;
			}
		}
		else if (command == "top")
		{
			if (size < 0)
				cout << "-1\n";
			else
				cout << arr[size] << "\n";
		}
		else if (command == "size")
		{
			cout << size + 1 << "\n";
		}
		else if (command == "pop")
		{
			if (size < 0)
				cout << "-1\n";
			else
			{
				cout << arr[size] << "\n";
				arr[size] = 0;
				size--;
			}
		}
		else if (command == "empty")
		{
			if (size < 0)
				cout << "1\n";
			else
				cout << "0\n";
		}
	}

	return 0;
}