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
	int temp = 0;	//������k�Ա�
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