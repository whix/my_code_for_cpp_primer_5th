//注意各个容器支持的插入迭代器类型  20141202 wan
#include <iostream>
#include <list>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

int main(){
	vector<int> nums, nums1, nums2, nums3;
	list<int> lnums;
	for (int i = 1; i < 10; i++)
	{
		nums.push_back(i);
	}
	copy(nums.cbegin(), nums.cend(), back_inserter(nums1));
//	copy(nums.cbegin(), nums.cend(), front_inserter(nums2));	//vector不支持front_inserter
	copy(nums.cbegin(), nums.cend(), front_inserter(lnums));
	copy(nums.cbegin(), nums.cend(), inserter(nums3, nums3.begin()));
	for(auto n :nums1){
		cout << n << " ";
	}
	cout << endl;

	for(auto n :lnums){
		cout << n << " ";
	}
	cout << endl;

	for(auto n :nums3){
		cout << n << " ";
	}
	cout << endl;

	system("pause");
}
