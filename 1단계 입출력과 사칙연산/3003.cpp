#include <iostream>

using namespace std;

// 3003¹ø Å·, Äý, ·è, ºñ¼ó, ³ªÀÌÆ®, Æù

int main()
{
	int compare[7] = { 1,1,2,2,2,8,0 };
	int get[7] = { 0, };
	for (int i = 0; i < 6; i++) cin >> get[i];
	for (int i = 0; i < 6; i++) cout << compare[i] - get[i] << " ";
}
