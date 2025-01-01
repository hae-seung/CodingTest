#include <iostream>
#include <stack>
using namespace std;


int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int K;
	cin >> K;

	stack<int>s;
	int num;
	for (int i = 0; i < K; i++)
	{
		cin >> num;
		if (num != 0)
			s.push(num);
		else
			s.pop();
	}

	int sum = 0;
	while (!s.empty())
	{
		sum += s.top();
		s.pop();
	}

	cout << sum;

	return 0;
}