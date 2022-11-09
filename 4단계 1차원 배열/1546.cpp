#include <iostream>

using namespace std;

// 1546¹ø Æò±Õ 
int main()
{
	int n;
	int max = 0;
	double result = 0;
	cin >> n;
	vector<int> get(n);
	for (int i = 0; i < n; i++)
	{
		cin >> get[i];
		if (max < get[i]) max = get[i];
		result += get[i];
	}
	result = (result / max * 100) / n;
	cout << fixed;
	cout.precision(6);
	cout << result << endl;
	return 0;
}