//10.34&10.35  20141202  wan

#include <iostream>
#include <vector>
#include <iterator>
using namespace std;

int main(){
	vector<int> nums;
	for (int i = 0; i < 10; i++)
	{
		nums.push_back(i);
	}
	//使用reverse_iterator逆序打印
	for(auto it = nums.crbegin(); it != nums.crend(); ++it){
		cout << *it << endl;
	}
	auto it = nums.cend();		//使用普通迭代器逆序打印
	do
	{
		--it;
		cout << *it << endl;
	} while (it != nums.cbegin());
	system("pause");

}
