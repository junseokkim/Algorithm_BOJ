#include <iostream>
#include <math.h>
using namespace std;


// 11653번 소인수분해

int main()
{
	int n;
	cin >> n;
	for (int i = 2; i <= n; i++)
	{
		if (n == 0) break;
		while (n % i == 0)
		{
			cout << i << endl;
			n = n / i;
		}
	}
	return 0;
}