//利用partition函数和谓词，输出大于5个字母的单词 20141130 wan
#include <iostream>
#include <algorithm>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

bool more_than_five(const string& s){
	return s.size() > 5;
}

int main(){
	ifstream in("word");
	vector<string> mtf_word;
	string tmp;
	while(in >> tmp){
		mtf_word.push_back(tmp);
	}
	auto ers_beg = partition(mtf_word.begin(), mtf_word.end(), more_than_five);
	mtf_word.erase(ers_beg, mtf_word.end());
	for(auto c : mtf_word){
		cout << c << "  ";
	}
	cout << endl;

	system("pause");

}
				
