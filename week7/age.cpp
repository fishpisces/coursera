#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	int n = 0;	//�趨��������
	cin >> n;	//���벡������
	int n1 = 0, n2 = 0, n3 = 0, n4 = 0;	//��ʼ��4���������
	for (int i = 0; i < n; i++)
	{
		int k;
		cin >> k;	//��ת����
		if (k>=1 && k<= 18)	n1++;
		else if (k>=19 && k <= 35) n2++;
		else if (k>=36 && k <= 60) n3++;
		else if (k>60 && k <= 100) n4++;
	}
		//�ж�������������
	double p1 = n1 * 100 / n, p2 = n2 * 100 / n, p3 = n3 * 100 / n, p4 = n4 * 100 / n;
		//����ٷֱȱ���
	cout << fixed << setprecision(2);
	cout << "1-18: " << p1 << "%" << endl;
	cout << "19-35: " << p2 << "%" << endl;
	cout << "36-60: " << p3 << "%" << endl;
	cout << "60-: " << p4 << "%" << endl;
	return 0;
}