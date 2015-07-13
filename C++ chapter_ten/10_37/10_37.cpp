//再次记住：算法不改变容器大小，要用迭代器   20141202  wan
#include <iostream>
#include <iterator>
#include <vector>
#include <list>
#include <algorithm>
using namespace std;

int main(){
	vector<int> nums;
	list<int> lnums;
	for (int i = 1; i < 11; i++)
	{
		nums.push_back(i);
	}
	//使用了插入迭代器
	copy(nums.crbegin() + 3, nums.crbegin() + 8, back_inserter(lnums));
	for(auto l : lnums){
		cout << l << endl;
	}
	system("pause");

}
