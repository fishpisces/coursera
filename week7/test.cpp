#include<iostream>
using namespace std;

int main()
{
	int a = 0, b = 0, c = 2, d = 0, e = 2, f = 2;
	cout << a << " " << a++ << " " << endl;
	cout << ++b << " " << b++ << " " << endl;
	cout << c << " " << (c++)+(++c) << " " << endl;
	cout << (d=f++)+(e=f) << endl;
	cout << f << " " << d << " " << e << endl;
	return 0;
}