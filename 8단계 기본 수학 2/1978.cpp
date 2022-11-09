#include <iostream>
#include <math.h>

using namespace std;

// 1978번 소수 찾기

int main()
{
	int n;
	int cnt = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int a;
		cin >> a;
		bool judge = true;
		if (a == 1)	 judge = false;
		for (int j = 2; j < a; j++)
		{
			if (a % j == 0)
			{
				judge = false;
				break;
			}
		}
		if (judge == true) cnt++;
	}
	cout << cnt << endl;
}
