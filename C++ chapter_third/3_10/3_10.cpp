//������������ŵ��ַ�����ȥ�������ź���� 20141107

#include<iostream>
#include<string>
#include<cctype>

using std::cin; using std::cout; using std::endl; using std::string;

int main()
{
	string str, result_str;

	cout << "Enter a string: " << endl;
	getline(cin,str);
	for(string::size_type index = 0; index < str.size(); index++)
	{
		if(!ispunct(str[index]))
			result_str += str[index];
	}

	cout << result_str;

	system("pause");

	return 0;
}