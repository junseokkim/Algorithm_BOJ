#include <iostream>
#include <vector>

using namespace std;

// 15596�� ���� N���� ��
long sum(vector<int>& a)
{
	long int sum = 0;
	for (int i = 0; i < a.size(); i++)
	{
		sum += a[i];
	}
	return sum;
}

