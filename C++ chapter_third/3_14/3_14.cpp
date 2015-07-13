//用cin读入整数(字符串)，然后存入一个vector对象  20141107
#include<iostream>
#include<string>
#include<cctype>
#include<vector>

using std::cin; using std::cout; using std::endl; using std::string;

int main()
{
	string str;
	std::vector<string> vec_str;
	cout << "Enter the string :" << endl;
	while (cin >> str)
	{
		vec_str.push_back(str);
		for (int i = 0; i < vec_str.size(); i++)
		{
			cout << vec_str[i] <<endl;
		}
		
	}

	system("pause");
	return 0;
	
}