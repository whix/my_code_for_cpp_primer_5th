//ʹ��unique_copy����������������Ҫʹ��back_inserter����������ס�㷨���ı�������С~ 20141202 wan
#include <iostream>
#include <list>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

int main(){
	vector<string> words;
	string tmp;
	cout << "Enter some strings(Ctrl+Z to end) :" << endl;
	while(cin >> tmp){
		words.push_back(tmp);
	}
	list<string> words_copy;
	unique_copy(words.begin(), words.end(), back_inserter(words_copy));
	for_each(words_copy.begin(), words_copy.end(), 
		     [](const string &s){ cout << s << " ";});
	system("pause");

}
