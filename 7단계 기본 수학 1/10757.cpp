#include <iostream>
#include <vector>
#include <string>

using namespace std;

//10757번 큰수 A+B --> 까다로움

int a[10001], b[10001];
string s1, s2, tmp;
int main()
{
	cin >> s1 >> s2;
	if (s1.size() < s2.size())
	{
		tmp = s1;
		s1 = s2;
		s2 = tmp;
	}
	for (int i = 0; i < s1.size(); i++)
	{
		a[i + 1] = s1[i] - '0';
	}
	for (int i = 0; i < s2.size(); i++)
	{
		b[i + 1 + (s1.size() - s2.size())] = s2[i] - '0';
	}
	for (int i = s1.size(); i > 0; i--)
	{
		if (a[i] + b[i] >= 10)
		{
			a[i-1]++;
		}
		a[i] = (a[i] + b[i]) % 10;
	}
	if (a[0] != 0) cout << a[0];
	for (int i = 1; i <= s1.size(); i++)
	{
		cout << a[i];
	}
	cout << endl;
	return 0;
}