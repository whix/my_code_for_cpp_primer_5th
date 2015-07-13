//map中带有vector、list等容器会变得复杂许多，注意	20141203  wan

#include <iostream>
#include <vector>
#include <string>
#include <map>

using namespace std;

//输出子函数，怕写到main()函数中略显混乱
//过程中都使用常值引用
void print_family(const map<string, vector<string>> &f){
	//对family用范围for处理每个不同surname，对象是pair
	for(const auto &p : f){
		cout << p.first << " has " << p.second.size()
			 << " children. They are: ";
		//对pair中的第二个值使用范围for，单独输出每个孩子的名字
		for(const auto &v : p.second){
			cout << v << " ";
		}
		cout << endl;

	}

}



int main(){
	map<string, vector<string>> family;
	string surname, chlild_name;
	do{
		cout << "Enter the surname and children(Ctrl+Z to end): " << endl;
		cin >> surname;
		//判断输入的surname是否存在
		if(family.find(surname) != family.end()){
			//存在就把childname加入vector里
			while(cin >> chlild_name)
			family[surname].push_back(chlild_name);
		}
		else
		{
			//不存在就建立个pair，这里用到一个临时的vector变量
			vector<string> name_tmp;
			//统统pushback到vector中
			while(cin >> chlild_name){
				name_tmp.push_back(chlild_name);
			}
			family.insert(make_pair(surname, name_tmp));
		}
		//输出family
		print_family(family);
		//使输入流有效
		cin.clear();
	}while(cin);

}
