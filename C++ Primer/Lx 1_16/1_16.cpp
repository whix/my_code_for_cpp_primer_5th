//对输入的树求和，不确定输入数目。20141105
#include<iostream>
using namespace std;
int main()
{
	int sum=0,value=0;
	cout<<"Enter the number to plus:"<<endl;
	while (cin>>value)
	{
		sum+=value;
		cout<<"Sum is:"<<sum<<endl;
	}
	return 0;
}