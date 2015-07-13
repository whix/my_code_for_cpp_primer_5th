//利用erase和insert进行字符串替换 20141130 wan

#include <iostream>
#include <string>
using namespace std;

void replace_str(string& s, string oldVal, string newVal){
	auto pos = s.find(oldVal);
	while(pos != string::npos){
		s.erase(pos, oldVal.size());
		s.insert(pos, newVal);
		pos = s.find(oldVal, pos);
	}
}

int main(){
	string sentence("zjzj, 悠悠我心！"), str1("zj"), str2("纸巾");
	replace_str(sentence, str1, str2);
	cout << sentence << endl;
	system("pause");
	return 0;
}

