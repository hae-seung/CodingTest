#include <iostream>
#include <string>
#include <deque>
using namespace std;


int main(void)
{
	int T;
	cin >> T;

	string p = "";
	string x = "";
	int n;
	bool flip = false, error = false;
	deque<int> d;

	for (int i = 0; i < T; i++)
	{
		d.clear();
		flip = false;
		error = false;
		cin >> p >> n >> x;
		

		string temp = "";
		for (char c : x)
		{
			if (isdigit(c))
				temp += c;
			else
			{
				if (!temp.empty())
				{
					d.push_back(stoi(temp));
					temp = "";
				}
			}
		}


		for (char c : p)
		{
			if (c == 'R')
				flip = !flip;
			else
			{
				if (d.empty())
				{
					cout << "error" << "\n";
					error = true;
					break;
				}

				if (flip)
					d.pop_back();
				else
					d.pop_front();
			}
		}

		if (error) continue;

		cout << "[";

		if (d.empty())
			cout << "";

		if (flip)
		{
			while (!d.empty())
			{
				cout << d.back();
				d.pop_back();
				if (!d.empty()) cout << ",";
			}
		}
		else
		{
			while (!d.empty())
			{
				cout << d.front();
				d.pop_front();
				if (!d.empty()) cout << ",";
			}
		}

		cout << "]\n";
	}
	
	return 0;
}