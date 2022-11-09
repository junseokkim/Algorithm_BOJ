#include <iostream>

using namespace std;

// 2577번 숫자의 개수
int main()
{
	int result[10] = { 0, };
	int a, b, c;
	cin >> a >> b >> c;
	a = a * b * c;
	for (int i = 1; i <= 10; i++)
	{
		int num = a % 10;
		a = a / 10;
		if (num == 0 && a == 0) break;
		else
		{
			result[num] = result[num] + 1;
		}
	}
	for (int i = 0; i < 10; i++)
	{
		cout << result[i] << "\n";
	}

}