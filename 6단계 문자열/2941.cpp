#include <iostream>
#include <string>

using namespace std;

// 2941번 크로아티아 알파벳
int main()
{
	char carr[101] = {};
	int i = 0, count = 0;
	cin >> carr;

	while (carr[i] != '\0')
	{
		if (carr[i] == 'c')
		{
			if (carr[i + 1] == '=' || carr[i + 1] == '-') i += 2;
			else ++i;
		}
		else if (carr[i] == 'd')
		{
			if (carr[i + 1] == 'z' && carr[i + 2] == '=') i += 3;
			else if (carr[i + 1] == '-') i += 2;
			else ++i;
		}
		else if (carr[i] == 'l')
		{
			if (carr[i + 1] == 'j') i += 2;
			else ++i;
		}
		else if (carr[i] == 'n')
		{
			if (carr[i + 1] == 'j')	i += 2;
			else ++i;
		}
		else if (carr[i] == 's')
		{
			if (carr[i + 1] == '=') i += 2;
			else ++i;
		}
		else if (carr[i] == 'z')
		{
			if (carr[i + 1] == '=')i += 2;
			else ++i;
		}
		else
		{
			++i;
		}

		count++;
	}

	cout << count;

	return 0;
}
