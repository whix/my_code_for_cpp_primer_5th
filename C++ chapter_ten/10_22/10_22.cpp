#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <fstream>
using namespace std;

bool longer6(const string &s){
	return s.size() > 6;
}


int main(){
	ifstream in ("word");
	vector<string> words;
	string tmp;
	while(in >> tmp){
		words.push_back(tmp);
	}
	auto cnt = count_if(words.begin(), words.end(), longer6);

	cout << cnt << (cnt > 1 ? " words" : " word") << " longer than 6" << endl;

	system("pause");
}
