//出现中断错误 在调试界面出现out_of_range，， 20141129 wan

#include <iostream>
#include <vector>
using namespace std;

int main(){
	vector<int> nothing;
	cout //<< "index:" << nothing[0] << endl
		 << "at:" << nothing.at(0) << endl;
		 //<< "front:" << nothing.front() << endl
		 //<< "begin:" << *nothing.begin() << endl;

	system("pause");
}
