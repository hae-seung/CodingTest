#include <iostream>
#include <stack>
using namespace std;


int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;

	stack<char> s;
	string word = "";
	int count = 0;

	for (int i = 0; i < N; i++)
	{
		cin >> word;
		s = {};
		for (int j = 0; j < word.length(); j++)
		{
			if (s.empty())
				s.push(word[j]);
			else
			{
				if (s.top() == word[j])
					s.pop();
				else
					s.push(word[j]);
			}
		}
		if (s.empty())
			count++;
	}

	
	cout << count;

	return 0;
}