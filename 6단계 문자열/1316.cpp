#include <iostream>
#include <string>

using namespace std;

// 1316번 그룹 단어 체커
int main()
{
	int n;
	int count = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		string str;
		int arr[26] = { 0, };
		int judge = 1;
		cin >> str;
		for (int i = 0; i < str.size(); i++)
		{
			int a = str.at(i) - 97;
			if (i != 0)
			{
				if (arr[a] != 0 && str.at(i - 1) != str.at(i))
				{
					judge = 0;
					break;
				}
			}
			arr[a] = arr[a] + 1;
		}
		if (judge == 1) count++;
	}
	cout << count << endl;
}