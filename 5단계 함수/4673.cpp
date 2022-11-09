#include <iostream>

using namespace std;

// 4673¹ø ¼¿ÇÁ ³Ñ¹ö
int main()
{
	for (int i = 1; i < 10000; i++)
	{
		int judge = 0;
		for (int j = 1; j < i; j++)
		{
			if (j < 10)
			{
				if (j + j == i)
				{
					judge = 1;
					break;
				}
			}
			else if (j < 100)
			{
				int sum = j + (j / 10) + (j % 10);
				if (sum == i)
				{
					judge = 1;
					break;
				}
			}
			else if (j < 1000)
			{
				int sum = j + (j / 100) + ((j % 100) / 10) + (j % 10);
				if (sum == i)
				{
					judge = 1;
					break;
				}
			}
			else if (j < 10000)
			{
				int sum = j + (j / 1000) + ((j % 1000) / 100)
					+ ((j % 100) / 10) + (j % 10);
				if (sum == i)
				{
					judge = 1;
					break;
				}
			}
		}
		if (judge == 0) cout << i << endl;
	}
	return 0;
}