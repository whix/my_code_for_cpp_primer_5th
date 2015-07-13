//注意accumulate在头文件numeric中,只读算法用cbegin和cend较好 20141130  wan

#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>
using namespace std;

int main(){
	vector<int> nums;
	for (int i = 0; i < 100; i++)
	{
		nums.push_back(i);
	}
	cout << "the sum is: " << accumulate(nums.cbegin(), nums.cend(), 0) << endl;
	system("pause");
	return 0;
}
