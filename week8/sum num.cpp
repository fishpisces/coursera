#include<iostream>
using namespace std;

int main()
{
	int a = 0;
	int sum[10];
	cin >> a >>sum[0]>>sum[1]>>sum[2]>>sum[3]>>sum[4];

	int s=0;
	for (int i = 0; i < 5; i++)
	{
		if (sum[i] < a)
			s = s + sum[i];
	}
	cout << s << endl;
	return 0;
}