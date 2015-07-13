//存入list中的string，然后用迭代器输出 与9_18无明显区别 20141129 wan

#include <iostream>
#include <list>
#include <vector>
#include <string>
using namespace std;

int main(){
	cout << "enter strings(Ctrl + Z to end): " << endl;
	list<string> lis;
	string temp;
	while (cin >> temp)
	{
		lis.push_back(temp);
	}
	for (auto it = lis.cbegin(); it != lis.cend() ; ++it)
	{
		cout << *it << " ";
	}
	cout << endl;

	system("pause");
}
