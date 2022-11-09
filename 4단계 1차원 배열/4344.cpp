#include <iostream>

using namespace std;

// 4344번 평균은 넘겠지
int main()
{
	int c, n;
	cin >> c;

	for (int i = 0; i < c; i++)
	{
		int score[1000] = { -1, };
		double result = 0;
		double count = 0;
		cin >> n;
		for (int j = 0; j < n; j++)
		{
			cin >> score[j];
			result += score[j];
		}
		result = result / n;

		for (int j = 0; j < n; j++)
		{
			if (result < score[j]) count += 1;
		}
		count = count / n * 100;
		cout << fixed;
		cout.precision(3);
		cout << count << "%" << endl;
	}
	return 0;
}