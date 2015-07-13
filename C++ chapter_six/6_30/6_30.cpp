//编译str_subrange函数，看编译器如何处理错误。20141112 wan
#include<iostream>
#include<string>
#include<vector>
using std::cin;using std::cout;using std::endl;using std::string;using std::vector;

bool str_subrange(const string &str1, const string &str2)
{
	if (str1.size() == str2.size())
		return str1 == str2;
	auto size =(str1.size() < str2.size())
				? str1.size() : str2.size();
	for(decltype(size) i = 0; i != size; ++i){
		if(str1[i] != str2[i])
			return;
	}

}


int main()
{
	string str1 = "hi", str2 = "hello";
	bool subrange = str_subrange(str1, str2);
}
