#include <iostream>
#include <vector>
#include <string>

using namespace std;

// 2775번 부녀회장이 될테야

int main()
{
	int t;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		int k, n;
		cin >> k >> n;
		vector<int> num;
		for (int j = 1; j <= n; j++)
		{
			num.push_back(j);
		}
		for (int j = 0; j < k; j++)
		{
			for (int x = n - 1; x >= 0; x--)
			{
				int sum = 0;
				for (int y = 0; y <= x; y++)
				{
					sum += num[y];
				}
				num[x] = sum;
			}
		}
		cout << num[n - 1] << endl;
	}
	return 0;
}