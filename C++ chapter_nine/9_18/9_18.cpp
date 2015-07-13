//存入deque中的string，然后用迭代器输出
#include <iostream>
#include <deque>
#include <vector>
#include <string>
using namespace std;

int main(){
	cout << "enter strings(Ctrl + Z to end): " << endl;
	deque<string> deq;
	string temp;
	while (cin >> temp)
	{
		deq.push_back(temp);
	}
	for (auto it = deq.cbegin(); it != deq.cend() ; ++it)
	{
		cout << *it << " ";
	}
	cout << endl;

	system("pause");
}
