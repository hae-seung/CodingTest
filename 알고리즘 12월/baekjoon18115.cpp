#include <iostream>
#include <vector>
#include <deque>
using namespace std;


int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;

	vector<int> v(N);
	for (int i = 0; i < N; i++)
		cin >> v[i];
	
	deque<int> d;
	int card = 1;

	for (int i = N - 1 ; i >= 0; i--)
	{
		if (v[i] == 1)
		{
			d.push_front(card);
		}
		else if (v[i] == 2)
		{
			int temp = d.front();
			d.pop_front();
			d.push_front(card);
			d.push_front(temp);
		}
		else
		{
			d.push_back(card);
		}
		card++;
	}

	while (!d.empty())
	{
		cout << d.front() << "\n";
		d.pop_front();
	}
	
	return 0;
}