//第一次使用map，不错    20141203  wan
#include <iostream>
#include <string>
#include <fstream>
#include <map>
#include <set>
using namespace std;

int main(){
	map<string, size_t> word_count;
	set<string> exclude;
	ifstream in("artical.txt"),in_set("exclude.txt");
	string word, word2;
	while(in_set >> word2){
		exclude.insert(word2);
	}

	while (in >> word)
	{
		if(exclude.find(word) == exclude.end())
			++word_count[word];
	}
	for(const auto &w : word_count){
		cout << w.first << " occurs " << w.second 
			 << (w.second > 1 ? " times" : " time") << endl;
	}
	system("pause");

}
