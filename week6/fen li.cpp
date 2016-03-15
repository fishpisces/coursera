#include<iostream>
using namespace std;

int main()
{
	int x;
	cin >> x;
	int bai, shi, ge;
	bai = x / 100;
	shi = x % 100 / 10;
	ge = x % 10;
	cout << bai << endl;
	cout << shi << endl;
	cout << ge << endl;
	return 0;
}