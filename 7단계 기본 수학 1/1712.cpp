#include <iostream>
#include <vector>
#include <string>

using namespace std;

// 1712�� ���ͺб��� -> ���ͺб����� �Ǵ� ������ ���������� ����ϱ�
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