//把字符串中的字符都改成X，包括字母、数字、标点符号。 20141107

#include<iostream>
#include<string>
#include<cctype>

using std::cin; using std::cout; using std::endl; using std::string;

int main()
{
	string x_string("hello,lucky dog! 2014");

	for(auto &c : x_string)			//c为引用，方便更改x_string中字符
	{
		if(isalnum(c) || ispunct(c))
			c = 'x';
	}
	cout << x_string << endl;

	system("pause");

	return 0;
}