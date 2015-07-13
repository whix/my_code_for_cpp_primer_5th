// 20141202 wan
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <fstream>
using namespace std;

int main(){
	ifstream in ("word");
	vector<string> words;
	string tmp;
	while(in >> tmp){
		words.push_back(tmp);
	}
	auto cnt = count_if(words.begin(), words.end(), [](const string& s)
			{ return s.size() > 10;});
	cout << cnt << (cnt > 1 ? " words" : " word") << " longer than 10" << endl;

	system("pause");
}
