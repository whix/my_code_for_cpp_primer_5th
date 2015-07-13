//从cin读入一组词存入vector对象，然后把词改成大写模式后输出，20141107

#include<iostream>
#include<string>
#include<cctype>
#include<vector>

using std::cin; using std::cout; using std::endl; using std::string;using std::vector;

int main()
{
	string in_str, str_temp;
	vector<string> vec_str;
	cout << "Enter the string :" << endl;

	while (cin >> in_str)					//读取输入，当输入完成的时候，使用Ctrl+Z，然后Enter取消输入，跳出while循环
	{
		vec_str.push_back(in_str);
	}
	
	for (auto &s : vec_str)					//转换成大写单词
	{
		str_temp = s;
		for (decltype(str_temp.size()) i = 0; i < str_temp.size(); i++)		// 把s复制到临时字符串中进行转换
		{
			str_temp[i] = toupper(str_temp[i]);
		}
		s = str_temp;
	}
	
	cout << "The result is :" << endl;

	for(auto s : vec_str)
		cout << s << endl;

	system("pause");
	return 0;

}