//计算一个函数被调用次数，20141110 wan
#include<iostream>
#include<string>
#include<vector>
using std::cin;using std::cout;using std::endl;using std::string;using std::vector;

int main()
{
	int called_f(),cnt = 0;
	cnt = called_f();
	cout << "How many times was the function called: " << cnt << endl;
	cnt = called_f();
	cout << "Now: " << cnt << endl;
	cnt = called_f();
	cout << "Now: " << cnt << endl;
	cnt = called_f();
	cout << "Now: " << cnt << endl;

	system("pause");
	return 0;
}

int called_f(){
	static int called_cnt = 0;
	return ++called_cnt;
}
