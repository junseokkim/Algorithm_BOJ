#include <iostream>
#include <math.h>

using namespace std;


// 9020¹ø °ñµå¹ÙÈåÀÇ ÃßÃø

bool isPrime(int a)
{
	int rt = sqrt(a);
	if (rt == 1 && a != 1)
	{
		return true;
	}
	if (a % 2)
	{
		for (int i = 2; i <= rt; i++)
		{
			if (!(a % i))
				break;
			if (i == rt)
				return true;
		}
	}
	return false;
}
int main()
{
	int t;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		int n;
		cin >> n;
		int mid = n / 2;
		for (int j = 0; j < n / 2 - 1; j++)
		{
			if (isPrime(mid - j) && isPrime(mid + j))
			{
				cout << mid - j << " " << mid + j << "\n";
				break;
			}
		}
	}
}