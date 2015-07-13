//检验是否调用复制构造函数	20141214   wan
#include <iostream>
#include <string>
using namespace std;

class Mystring
{
public:
	Mystring() = default;
	Mystring(int i, string str){
		while (i--)
		{
			teststr += str;
		}
	}
	Mystring(const Mystring &Mys){
		teststr = Mys.teststr;
		cout << "copy structure function." << endl;
	}
	~Mystring() = default;

private:
	string teststr;

};

int main(){
	Mystring dots(10, ",");
	Mystring s(dots);
	Mystring a = s;
	system("pause");
}


