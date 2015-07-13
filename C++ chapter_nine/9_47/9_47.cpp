//字符查找 20141130 wan
#include <iostream>
#include <string>
using namespace std;

int main(){
	string str("ab2c3d7R4E6");
	auto pos = 0;
	pos = str.find_first_of("0123456789",pos);
	while( pos != string::npos){
		cout << pos << endl;
		pos = str.find_first_of("0123456789", ++pos); //从下一位开始查找，不然会卡死在pos=2中
	}
	system("pause");
	return 0;
}
