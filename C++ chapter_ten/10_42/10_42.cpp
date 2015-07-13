//list容器不支持随机访问，sort算法需要随机访问故不能使用  20141202   wan
//虽然能用unique算法，但处理list容器的效率不高
//故应使用list容器特有的sort/unique容器，而且自带的unique会自动删除重复单词

#include <iostream>
#include <algorithm>
#include <fstream>
#include <list>
#include <string>
using namespace std;

void elimDups(list<string> &lstr){
	lstr.sort();
	lstr.unique();
}

int main(){
	ifstream in("word");
	string tmp;
	list<string> words;
	while(in >> tmp){
		words.push_back(tmp);
	}
	elimDups(words);
	for_each(words.begin(), words.end(), 
			 [](const string &s){ cout << s << "  ";});
	cout << endl;
	system("pause");

}

