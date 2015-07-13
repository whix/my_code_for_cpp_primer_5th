//理清结构关系很重要
#include <iostream>
#include <map>
#include <list>
#include <string>
#include <algorithm>
using namespace std;

void save_word_list(map<string, list<int>> &m , string s, int line){
	//找不到对应关键字就make_pair再插入，找到就再尾部插入新行号，行号可重复
	if(m.find(s) != m.end()){
		m[s].push_back(line);	
	}
	else m.insert(make_pair(s, list<int>(1,line)));
	//输出加入之后的
	auto pos = m.find(s);
	cout << pos->first << " is in the line ";
	for(auto n : pos->second){
		cout << n << " ";
	}
	cout << endl;

}


int main(){
	map<string, list<int>> word_list;
	string word;
	int line;
	cout << "Enter word and which line it is in(Ctrl+Z to end): " << endl;
	while(cin >> word >> line){
		save_word_list(word_list, word, line);
	}
	system("pause");
}
