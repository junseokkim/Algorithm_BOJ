#include <iostream>

using namespace std;

// 8958¹ø OXÄûÁî
int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int count = 0;
		int score = 0;
		char get[80] = { NULL, };
		cin >> get;
		int j = 0;
		while (get[j] != NULL)
		{
			if (get[j] == 'O')
			{
				count++;
				score += count;
			}
			else
			{
				count = 0;
			}
			j++;
		}
		cout << score << endl;

	}
	return 0;
}