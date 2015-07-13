//类的读取和输出 20141105
#include<iostream>
#include"Sales_item.h"
using namespace std;

int main()
{
	Sales_item book1,book2;
	cin>>book1>>book2;
	cout<<book1<<endl<<book2<<endl;
	cout<<"Sum of book1 and book2:"<<book1+book2<<endl;
	system("pause");
	return 0;
}

