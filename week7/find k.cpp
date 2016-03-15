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
	int temp = 0,tempp=0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (a[i] < a[j]) temp++;
			if (a[i] == a[j]) tempp++;
		}
		tempp--;//tempp记录相同的元素，这里减去自身
		if ((temp <= k - 1) && (temp + tempp >= k - 1))//要么比它大的有那么多，或者加上相等的
		{
			cout << a[i];
			return 0;
		}
		
		temp = 0;
		tempp = 0;
	}
	return 0;
}