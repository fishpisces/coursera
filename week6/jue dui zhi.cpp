#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int max_ji = 0, min_ou = 100;
	int x;
	for (int i = 0; i < 6; i++)
	{
		cin >> x;
		if (x % 2 == 1 && x > max_ji)
		{
			max_ji = x;
		}
		else if (x % 2 == 0 && x < min_ou)
		{
			min_ou = x;
		}
	}
	cout << abs(max_ji - min_ou) << endl;
	return 0;
}