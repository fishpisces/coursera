#include<iostream>
using namespace std;

int main()
{
	int n = 0, k = 0;	
	//初始化共输入多少个数以及定位数
	cin >> n;
	cin >> k;
	int a[100];	
	//定义100个数组存储输入的数字
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	//将所有数填入数组
	int temp = 0;	//计数与k对比
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (a[i] > a[j]&&a[i]==a[j]) temp++;
		}
		if (temp == k-1)
		{
			cout << a[i] << endl;
		}
	}
	return 0;
}