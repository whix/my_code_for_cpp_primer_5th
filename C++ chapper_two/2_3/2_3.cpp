//无符号和符号数，引发的错误

#include<iostream>
using namespace std;

int main()
{
	unsigned u = 10, u2 = 42;
	cout << u2 - u << endl;
	cout << u - u2 << endl;		//结果为4294967264，本来结果为负数，但其是无符号数，所以高位被置一，导致此结果

	int i = 10, i2 = 42;
	cout << i2 - i << endl;
	cout << i - i2 << endl;
	cout << i - u2 << endl;
	cout << u2 - i << endl;

	system("pause");

	return 0;
}