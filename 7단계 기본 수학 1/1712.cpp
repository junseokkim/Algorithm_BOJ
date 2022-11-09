#include <iostream>
#include <vector>
#include <string>

using namespace std;

// 1712번 손익분기점 -> 손익분기점이 되는 시점을 수학적으로 계산하기
int main()
{
	long long int a, b, c;
	cin >> a >> b >> c;
	long long int i = 1;
	if (b >= c)
	{
		cout << -1 << endl;
		return 0;
	}
	cout << a / (c - b) + 1 << endl;
	return 0;
}