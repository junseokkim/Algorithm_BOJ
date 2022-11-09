#include <iostream>
#include <vector>
#include <string>

using namespace std;

//2839¹ø ¼³ÅÁ ¹è´Þ

int main()
{
	int n;
	cin >> n;
	int a, b;
	b = n / 5;
	while (1)
	{
		if (b < 0)
		{
			cout << -1 << endl;
			return 0;
		}
		if ((n - (b * 5)) % 3 == 0)
		{
			a = (n - (b * 5)) / 3;
			break;
		}
		b--;
	}
	cout << a + b << endl;
	return 0;
}