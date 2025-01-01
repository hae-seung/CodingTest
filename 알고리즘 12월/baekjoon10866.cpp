#include <iostream>
#include <deque>
using namespace std;


int main(void)
{
	int N;
	cin >> N;

	string command = "";
	int n;
	deque<int>d;
	
	for (int i = 0; i < N; i++)
	{
		cin >> command;
		if (command == "push_back")
		{
			cin >> n;
			d.push_back(n);
		}
		else if (command == "push_front")
		{
			cin >> n;
			d.push_front(n);
		}
		else if (command == "front")
		{
			if (!d.empty())
				cout << d.front() << "\n";
			else
				cout << -1 << "\n";
		}
		else if (command == "back")
		{
			if (!d.empty())
				cout << d.back() << "\n";
			else
				cout << -1 << "\n";
		}
		else if (command == "size")
			cout << d.size() << "\n";
		else if (command == "empty")
		{
			if (d.empty())
				cout << 1 << "\n";
			else
				cout << 0 << "\n";
		}
		else if (command == "pop_front")
		{
			if (d.empty())
				cout << -1 << "\n";
			else
			{
				cout << d.front() << "\n";
				d.pop_front();
			}
		}
		else if (command == "pop_back")
		{
			if (d.empty())
				cout << -1 << "\n";
			else
			{
				cout << d.back() << "\n";
				d.pop_back();
			}
		}
	}

	return 0;
}