#include<iostream>
using namespace std;

int main()
{
	int n = 0, k = 0;	
	//��ʼ����������ٸ����Լ���λ��
	cin >> n;
	cin >> k;
	int a[100];	
	//����100������洢���������
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	//����������������
	int temp = 0,tempp=0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (a[i] < a[j]) temp++;
			if (a[i] == a[j]) tempp++;
		}
		tempp--;//tempp��¼��ͬ��Ԫ�أ������ȥ����
		if ((temp <= k - 1) && (temp + tempp >= k - 1))//Ҫô�����������ô�࣬���߼�����ȵ�
		{
			cout << a[i];
			return 0;
		}
		
		temp = 0;
		tempp = 0;
	}
	return 0;
}