//输入流的迭代器默认构造函数构造一个空的流迭代器，		20141202  wan
//所以当其他迭代器指向一个空的位置或错误的位置，
//可以知道输入结束，如此例中的受str_eof
#include <iostream>
#include <vector>
#include <string>
#include <fstream>
using namespace std;

int main(){
	ifstream in("word");
	istream_iterator<string> str_it(in);
	istream_iterator<string> str_eof;			//尾后迭代器
	vector<string> str;
	string tmp;
	while(str_it != str_eof)
		str.push_back(*str_it++);
	for(auto s : str){
		cout << s << "  ";
	}
	cout << endl;
	system("pause");

}
