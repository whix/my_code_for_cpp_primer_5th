//��cin����һ��ʴ���vector����Ȼ��Ѵʸĳɴ�дģʽ�������20141107

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

	while (cin >> in_str)					//��ȡ���룬��������ɵ�ʱ��ʹ��Ctrl+Z��Ȼ��Enterȡ�����룬����whileѭ��
	{
		vec_str.push_back(in_str);
	}
	
	for (auto &s : vec_str)					//ת���ɴ�д����
	{
		str_temp = s;
		for (decltype(str_temp.size()) i = 0; i < str_temp.size(); i++)		// ��s���Ƶ���ʱ�ַ����н���ת��
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