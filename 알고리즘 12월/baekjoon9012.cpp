#include <iostream>
#include <vector>
#include <string>
#include <stack>
using namespace std;

string checkVPS(string temp);

int main(void)
{
	int T;
	cin >> T;

	string vps = "";
	vector<string> v;


	for (int i = 0; i < T; i++)
	{
		vps = "";
		cin >> vps;
		v.push_back(vps);
	}

	for (int i = 0; i < v.size(); i++)
	{
		string temp = v[i];
		cout << checkVPS(temp) << "\n";
	}



	return 0;
}

string checkVPS(string temp)
{
	stack<char> s;

	for (int i = 0; i < temp.length(); i++)
	{
		if (temp[i] == '(')
			s.push(temp[i]);
		else
		{
			if (s.empty())
				return "NO";
			s.pop();
		}
	}

	if (!s.empty())
		return "NO";
	else
		return "YES";
}