#include<iostream>
#include<math.h>
#include<cmath>
using namespace std;

int main()
{
	int N = 0;
	double K = 0,price=0,money=0;

	while (cin>>N>>K)
	{
		if (N < 10 || N>50 || K < 1 || K>20)
		{
			return 0;
		}
		for (int i = 1; i <= 20; i++)
		{
			/*price = price + price*K / 100;*/
			price = 200 * pow(1 + K / 100, i - 1);
			money = i*N;
			if (money >= price)
			{
				cout << i << endl;
				break;
			}
		}
		if (money < price)
			cout << "Impossible" << endl;
	}
	return 0;
}