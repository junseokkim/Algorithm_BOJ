#include <iostream>
#include <math.h>

using namespace std;


// 2581¹ø ¼Ò¼ö

int main()
{
	int m, n;
	cin >> m >> n;
	int sum = 0;
	int min = -1;
	for (int i = m; i <= n; i++)
	{
		int cnt = 0;
		for (int j = 1; j <= i; j++)
		{
			if (i % j == 0)
			{
				cnt++;
			}
		}
		if (cnt == 2)
		{
			if (min == -1) min = i;
			sum += i;
		}
	}
	if (min == -1) cout << -1 << endl;
	else
	{
		cout << sum << endl << min << endl;
	}
	return 0;
}