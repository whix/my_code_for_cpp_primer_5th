//������������ã���ʹ��β�÷������͡�decltype�������ͱ��� 20141112 wan

#include<iostream>
#include<string>
#include<vector>
using std::cin;using std::cout;using std::endl;using std::string;using std::vector;

string str[10] = {"aa","bb","cc","ddd","aa","www","qqq","ee","tt","pp"};

string(& return_str())[10]
{
	return str;
}


int main()
{
	
	string str1[10];
	for (int i = 0; i < 10; i++)
	{
		cout << return_str()[i] << endl;
	}
	

	system("pause");
}

/*
auto return_str() -> string (&)[10]  //β�÷�������
decltype(str) &return_str()			 //decltype����

using str_arry = string[10];		 //���ͱ��� 
str_arry &return_str()

*/