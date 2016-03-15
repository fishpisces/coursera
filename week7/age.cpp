#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	int n = 0;	//设定病人数量
	cin >> n;	//输入病人数量
	int n1 = 0, n2 = 0, n3 = 0, n4 = 0;	//初始化4个区间变量
	for (int i = 0; i < n; i++)
	{
		int k;
		cin >> k;	//中转变量
		if (k>=1 && k<= 18)	n1++;
		else if (k>=19 && k <= 35) n2++;
		else if (k>=36 && k <= 60) n3++;
		else if (k>60 && k <= 100) n4++;
	}
		//判定归类所属区间
	double p1 = n1 * 100 / n, p2 = n2 * 100 / n, p3 = n3 * 100 / n, p4 = n4 * 100 / n;
		//定义百分比变量
	cout << fixed << setprecision(2);
	cout << "1-18: " << p1 << "%" << endl;
	cout << "19-35: " << p2 << "%" << endl;
	cout << "36-60: " << p3 << "%" << endl;
	cout << "60-: " << p4 << "%" << endl;
	return 0;
}