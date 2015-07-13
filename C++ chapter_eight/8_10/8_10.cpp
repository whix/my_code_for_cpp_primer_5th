//学习使用istringstream和保存类类型的vector的相关操作 20141128 wan 
//顺便把8_11中的把istringstream放在while循环外的改动要求在这里完成

#include<iostream>
#include<vector>
#include<string>
#include<sstream>
#include<fstream>

using namespace std;

class name_num {
public:
	string name;
	vector<string> nums;
	void print_nn();				//输出成员函数，好像输出作为友元函数较恰当，这里直接作为成员函数
};

void name_num::print_nn()
{
	cout << name << ": ";
	for(auto c : nums)
	{
		cout << c << " ";
	}
	cout << endl;
}



int main()
{
	vector<string> vec_str;				//保存文件中读取的数据
	string temp,temp1;					//临时变量，一个保存行，另一个保存号码
	ifstream in_data("sstream");
	while(getline(in_data, temp))			//以行为单位存入vec_str中
	{
		vec_str.push_back(temp);
	}
	vector<name_num> vec_class;				//类的vec容器
	for(auto s : vec_str)
	{
		istringstream is_line(s);
		//istringstream is_line;			//8_11
		//is_line.str(s);					//8_11中的要求，其实就是声明与定义分开
		name_num class_temp;
		is_line >> class_temp.name;
		while (is_line >> temp1)
		{
			class_temp.nums.push_back(temp1);		//类里面的vec成员使用pushback
		}
		vec_class.push_back(class_temp);			
	}
	for(auto v : vec_class)
	{
		v.print_nn();
	}

	system("pause");

}
