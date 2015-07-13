//至少用三种创建pair的方法，试试哪一种好用   20141203 wan

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
		p_str_int.push_back(make_pair(str, num));			//make_pair比较好用
//		p_str_int.push_back(pair<string, int>(str, num));	//第二种。第三种是列表初始化不支持
	}
	for(const auto &v : p_str_int){
		cout << "The string: " << v.first 
			 << " ; The int num:" << v.second <<endl;
	}
	system("pause");



}

