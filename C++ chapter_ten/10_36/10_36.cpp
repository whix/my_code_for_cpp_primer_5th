//无法计算下标位置，不知道为什么  20141202   wan
#include <iostream>
#include <list>
#include <algorithm>
using namespace std;

int main(){
	list<int> nums;
	int num;
	cout << "Enter some nums(Ctrl+Z to end): " << endl;
	while(cin >> num){
		nums.push_back(num);
	}

	auto pos = find(nums.crbegin(), nums.crend(), 0);
	cout << *pos << " is localed at " << "?" << endl;

	system("pause");
}
