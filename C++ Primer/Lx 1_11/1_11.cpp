//Êä³ö·¶Î§ÄÚÊı×Ö 2014/11/05
#include<iostream>
using namespace std;
int main()
{
	int a1,a2;
	cout<<"Enter two numbers(int):"<<endl;
	cin>>a1>>a2;
	cout<<"The numbers between "<<a1<<"~"<<a2<<" is: ";
	while (a2 > a1+1)
	{
		a1++;
		cout<<a1<<" ";
	}
	cout<<"DONE!"<<endl;
	system("pause");
	return 0;
}
	