#include<iostream>
using namespace std;
#define PI 3.14159
#define SUM 20000

int main()
{
	int h, r, n;
	cin >> h >> r;
	double total;
	total = PI*r*r*h;
	n = SUM / total;
	if (n<SUM / total)
	{
		cout << n + 1 << endl;
	}
	else
	{
		cout << n << endl;
	}
	return 0;
}