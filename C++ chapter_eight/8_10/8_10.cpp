//ѧϰʹ��istringstream�ͱ��������͵�vector����ز��� 20141128 wan 
//˳���8_11�еİ�istringstream����whileѭ����ĸĶ�Ҫ�����������

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
	void print_nn();				//�����Ա���������������Ϊ��Ԫ������ǡ��������ֱ����Ϊ��Ա����
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
	vector<string> vec_str;				//�����ļ��ж�ȡ������
	string temp,temp1;					//��ʱ������һ�������У���һ���������
	ifstream in_data("sstream");
	while(getline(in_data, temp))			//����Ϊ��λ����vec_str��
	{
		vec_str.push_back(temp);
	}
	vector<name_num> vec_class;				//���vec����
	for(auto s : vec_str)
	{
		istringstream is_line(s);
		//istringstream is_line;			//8_11
		//is_line.str(s);					//8_11�е�Ҫ����ʵ���������붨��ֿ�
		name_num class_temp;
		is_line >> class_temp.name;
		while (is_line >> temp1)
		{
			class_temp.nums.push_back(temp1);		//�������vec��Աʹ��pushback
		}
		vec_class.push_back(class_temp);			
	}
	for(auto v : vec_class)
	{
		v.print_nn();
	}

	system("pause");

}
