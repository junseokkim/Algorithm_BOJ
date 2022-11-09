#include <iostream>

using namespace std;

// 3052번 나머지
int main()
{
	int get;
	int result[42] = { 0, };
	for (int i = 0; i < 10; i++)
	{
		cin >> get;
		int temp = get % 42;
		result[temp] = result[temp] + 1;
	}
	int sum = 0;
	for (int i = 0; i < 42; i++)
	{
		if (result[i] != 0) sum++;
	}
	cout << sum;
	return 0;
}