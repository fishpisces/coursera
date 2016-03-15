#include<iostream>
using namespace std;

int main()
{
	int x, max=0;
	cin >> x;
	for (int i = 0; i < x; i++)
	{
		int temp;
		cin >> temp;
		if (temp>max)
		{
			max = temp;
		}
	}
	cout << max << endl;
	return 0;
}