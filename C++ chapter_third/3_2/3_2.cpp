//用string标准库读取一行输入和一个词，20141106

#include<iostream>
#include<string>
using std::string;
using std::cin;
using std::cout;
using std::endl;

int main()
{
	string line;
	while(cin >> line)				//get one word
		cout << line << endl;
//	while(getline(cin, line))		//读取一行输入~~
//		cout << line << endl;

	system("pause");

	return 0;
}