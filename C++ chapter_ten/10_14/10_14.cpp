//编写一个lambda，接受两个int，输出和   20141202 wan
#include <iostream>
//#include <algorithm>
using namespace std;

int main(){
	auto f = [](int a, int b)  { return a + b;	};
	int a = 10, b = 9;
	cout << f(a, b) << endl;
	system("pause");
}
