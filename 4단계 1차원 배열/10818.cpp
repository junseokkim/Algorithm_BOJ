#include <iostream>

using namespace std;

// 10818번 최대, 최소
int main()
{
	int num;
	cin >> num;
	vector<int>a(num);
	for (int i = 0; i < num; i++) cin >> a[i];
	int max = a[0];
	int min = a[0];
	for (int i = 1; i < num; i++)
	{
		if (max < a[i]) max = a[i];
		if (min > a[i]) min = a[i];
	}
	cout << min << " " << max;
	return 0;
}