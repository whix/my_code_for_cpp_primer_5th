//�޷��źͷ������������Ĵ���

#include<iostream>
using namespace std;

int main()
{
	unsigned u = 10, u2 = 42;
	cout << u2 - u << endl;
	cout << u - u2 << endl;		//���Ϊ4294967264���������Ϊ�������������޷����������Ը�λ����һ�����´˽��

	int i = 10, i2 = 42;
	cout << i2 - i << endl;
	cout << i - i2 << endl;
	cout << i - u2 << endl;
	cout << u2 - i << endl;

	system("pause");

	return 0;
}