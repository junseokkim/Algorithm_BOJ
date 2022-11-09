#include <iostream>

using namespace std;

// 25304번 영수증

int main()
{
	int price;
	cin >> price;
	int n, sum = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int a, b;
		cin >> a >> b;
		sum += (a * b);
	}
	if (sum == price) cout << "Yes";
	else cout << "No";
}