#include<iostream>
using namespace std;

int main()
{
	int x = 0;
	cin >> x;
	int	x1 = 0, x2 = 0, x3 = 0, x4 = 0, x5 = 0 ,x6 = 0;		//100元，50元，20元，10元，5元，1元
	x1 = x / 100;
	x2 = x % 100 / 50;
	x3 = x % 100 / 20;
	x4 = x % 100 % 20 / 10;
	x5 = x % 100 % 20 % 10 / 5;
	x6 = x % 100 % 20 % 10 % 5 / 1;
	cout << x1 << endl;
	cout << x2 << endl;
	cout << x3 << endl;
	cout << x4 << endl;
	cout << x5 << endl;
	cout << x6 << endl;
	return 0;
}