#include<iostream>
using namespace std;

int main()
{
	int n = 0;
	cin >> n;
	for (int i = 10; i < n; i++)
	{
		int s = 0, g = 0;
		s = i / 10;
		g = i - 10 * s;
		if (i%(s+g)==0)
		{
			cout << i << endl;
		}
	}
	return 0;
}