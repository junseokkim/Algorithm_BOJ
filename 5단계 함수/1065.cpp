#include <iostream>

using namespace std;

// 1065¹ø ÇÑ¼ö
int main()
{
	int n;
	cin >> n;
	int cnt = 0;
	for (int i = 1; i < n + 1; i++)
	{
		if (i < 100) cnt++;
		else
		{
			int a = i % 10;
			int b = (i % 100) / 10;
			int c = i / 100;
			if (c - b == b - a) cnt++;
		}
	}
	cout << cnt << endl;
	return 0;
}