#include<iostream>
using namespace std;

int main()
{
	int n = 0, k = 0, sum = 0;
	int a[1000];
	
	cin >> n >> k;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = i+1; j < n; j++)
		{
			if (a[i] + a[j] == k)
				sum=1;
		}
	}
	if (sum == 1)
		cout << "yes" << endl;
	else
		cout << "no" << endl;
	return 0;
}