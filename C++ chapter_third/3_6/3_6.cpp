//���ַ����е��ַ����ĳ�X��������ĸ�����֡������š� 20141107

#include<iostream>
#include<string>
#include<cctype>

using std::cin; using std::cout; using std::endl; using std::string;

int main()
{
	string x_string("hello,lucky dog! 2014");

	for(auto &c : x_string)			//cΪ���ã��������x_string���ַ�
	{
		if(isalnum(c) || ispunct(c))
			c = 'x';
	}
	cout << x_string << endl;

	system("pause");

	return 0;
}