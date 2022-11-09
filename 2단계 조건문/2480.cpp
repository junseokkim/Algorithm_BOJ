#include <iostream>

using namespace std;

//2480 번 주사위 세개
int main()
{
	int a, b, c;
	int money = 0;
	cin >> a >> b >> c;
	if (a == b && b == c)
	{
		money = (10000 + a * 1000);
	}
	else if (a != b && b != c && a != c)
	{
		if (a > b)
		{
			if (a > c)
			{
				money = 100 * a;
			}
			else money = 100 * c;
		}
		else
		{
			if (b > c)
			{
				money = 100 * b;
			}
			else money = 100 * c;
		}
	}
	else
	{
		if (a == b)
		{
			money = 1000 + 100 * a;
		}
		else if (b == c)
		{
			money = 1000 + 100 * b;
		}
		else if (c == a)
		{
			money = 1000 + 100 * a;
		}

	}
	cout << money;
	return 0;

}