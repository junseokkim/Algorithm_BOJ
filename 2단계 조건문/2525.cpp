#include <iostream>

using namespace std;

// 2525¹ø ¿Àºì ½Ã°è
int main()
{
	int h, m;
	int time;
	cin >> h >> m;
	cin >> time;
	if (m + time >= 60)
	{
		for (int i = (m + time) / 60; i > 0; i--)
		{
			if (h == 23) h = 0;
			else h++;
		}
		m = (m + time) % 60;
	}
	else m += time;

	cout << h << " " << m;
}