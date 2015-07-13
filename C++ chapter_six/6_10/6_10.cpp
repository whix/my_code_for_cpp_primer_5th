//利用指针形参交换两实参的值。 20141110 wan
#include<iostream>
#include<string>
#include<vector>
using std::cin;using std::cout;using std::endl;using std::string;using std::vector;

int main()
{
	int q, p;
	void exchange(int *p, int *q);
	
	cout << "Enter two nums: " << endl;
	cin >> q >> p;
	cout << "before exchange: " << endl << "q = " << q << "\t\tp = " << p << endl;
	exchange(&q, &p);
	cout << "after exchange: " << endl << "q = " << q << "\t\tp = " << p << endl;
	
	system("pause");
	return 0;
}

void exchange(int *p, int *q){
	int x;
	x = *p;
	*p = *q;
	*q = x;
}
