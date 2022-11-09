#include <iostream>
#include <math.h>
using namespace std;

// 4948번 베르트랑 공준

int main()
{
	for (;;)
	{
		int n;
		cin >> n;
		if (n == 0) break;
		int max = 2 * n;
		int cnt = 0;
		for (int j = n + 1; j <= max; j++)
		{
			int rt = sqrt(j);
			if (rt == 1 && j != 1)
			{
				cnt++;
				continue;
			}
			if (j % 2)
			{
				for (int x = 2; x <= rt; x++)
				{
					if (!(j % x))
						break;
					if (x == rt)
						cnt++;
				}
			}
		}
		cout << cnt << endl;
	}
}