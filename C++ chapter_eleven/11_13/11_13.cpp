//���������ִ���pair�ķ�����������һ�ֺ���   20141203 wan

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
	vector<pair<string, int>> p_str_int;
	pair<string, int> str_int;
	string str;
	int num;
	cout << "Enter strings and nums(Ctrl+Z to end): " << endl;
	while(cin >> str >> num){
		p_str_int.push_back(make_pair(str, num));			//make_pair�ȽϺ���
//		p_str_int.push_back(pair<string, int>(str, num));	//�ڶ��֡����������б��ʼ����֧��
	}
	for(const auto &v : p_str_int){
		cout << "The string: " << v.first 
			 << " ; The int num:" << v.second <<endl;
	}
	system("pause");



}

