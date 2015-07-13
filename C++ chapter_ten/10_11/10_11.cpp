//使用为此代替sort中默认的<排序  20141130 wan

#include <iostream>
#include <string>
#include <fstream>
#include <algorithm>
#include <vector>
using namespace std;

bool isLonger(const string& s, const string& s1){
	return s.size() > s1.size();
}

int main(){
	ifstream in("word");
	vector<string> vacab;
	string tmp;
	while(in >> tmp){
		vacab.push_back(tmp);
	}
	sort(vacab.begin(), vacab.end(), isLonger);
	int cnt = 0;
	for(auto v : vacab){
		cout << v << "\t";
		if(cnt == 4){
			cnt = 0;
			cout << endl;
		}
	}
	cout << endl;
	system("pause");

}

