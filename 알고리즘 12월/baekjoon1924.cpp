#include <iostream>
using namespace std;


int main(void)
{
	int x, y;
	cin >> x >> y;

	int sum = 0;

	for (int i = 1; i < x; i++)
	{
		if (i == 1 || i == 3 || i == 5 || i == 7 ||
			i == 8 || i == 10 || i == 12)
		{
			sum += 31;
		}
		else if (i == 2)
			sum += 28;
		else
			sum += 30;
	}

	sum += y;

	sum %= 7;

	switch (sum)
	{
	case 0:
		cout << "SUN";
		break;
	case 1:
		cout << "MON";
		break;
	case 2:
		cout << "TUE";
		break;
	case 3:
		cout << "WED";
		break;
	case 4:
		cout << "THU";
		break;
	case 5:
		cout << "FRI";
		break;
	case 6:
		cout << "SAT";
		break;
	}

	return 0;
}