#include <iostream>

using namespace std;

// 2562¹ø ÃÖ´ñ°ª
int main()
{
	int a[9];
	for (int i = 0; i < 9; i++)
	{
		cin >> a[i];
	}
	int max = a[0];
	int count = 0;
	for (int i = 1; i < 9; i++)
	{
		if (max < a[i])
		{
			max = a[i];
			count = i;
		}
	}
	cout << max << "\n" << count + 1;
	return 0;
}