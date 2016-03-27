#include<iostream>
using namespace std;

int main()
{
	int n = 0;
	int time[10];
	double rw = 0.0;
	double rb = 0.0;
	cin >> n;
	
	for (int i = 0; i < n; i++)
	{
		cin >> time[i];
	}

	for (int i = 0; i < n; i++)
	{
		rw = time[i]/1.2;
		rb = time[i]/3.0 + 27 + 23;
		if (rw > rb)
			cout << "Bike" << endl;
		else
			cout << "Walk" << endl;
	}
	return 0;
}