//����ṹ��ϵ����Ҫ
#include <iostream>
#include <map>
#include <list>
#include <string>
#include <algorithm>
using namespace std;

void save_word_list(map<string, list<int>> &m , string s, int line){
	//�Ҳ�����Ӧ�ؼ��־�make_pair�ٲ��룬�ҵ�����β���������кţ��кſ��ظ�
	if(m.find(s) != m.end()){
		m[s].push_back(line);	
	}
	else m.insert(make_pair(s, list<int>(1,line)));
	//�������֮���
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
