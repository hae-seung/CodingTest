#include <iostream>

using namespace std;

int GetGCD(int a, int b);

int main(void)
{
	int N, M;
	cin >> N >> M;

	//최대공약수
	
	if (N < M)
		swap(N, M);


	int gcd = GetGCD(N, M);
	cout << gcd << "\n";

	int lcm = gcd * (N / gcd) * (M / gcd);
	cout << lcm;

	
	return 0;
}

int GetGCD(int a, int b)
{
	if (a % b != 0)
		return GetGCD(b, a % b);
	else
		return b;
}