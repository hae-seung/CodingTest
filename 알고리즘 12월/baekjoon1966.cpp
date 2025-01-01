#include <iostream>
#include <queue>

using namespace std;


int main(void)
{
	int T;
	cin >> T;

	queue<pair<int,int>> q;// {index, value}

	priority_queue<int> maxQueue;

	for (int i = 0; i < T; i++)
	{
		int N, M;
		cin >> N >> M;

		q = {};
		maxQueue = {};

		for (int j = 0; j < N; j++)
		{
			int n;
			cin >> n;
			maxQueue.push(n);
			q.push({ j, n });
		}

		int count = 0;

		while (!q.empty())
		{
			if (maxQueue.top() == q.front().second)
			{
				if (q.front().first == M)
				{
					count++;
					break;
				}
				else
				{
					maxQueue.pop();
					q.push(q.front());
					q.pop();
					count++;
				}
			}
			else
			{
				q.push(q.front());
				q.pop();
			}
		}
		cout << count << "\n";
	}

	return 0;
}