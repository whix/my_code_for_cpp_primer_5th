//20141130 wan
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	vector<int> nums(10, 1);
	fill_n(nums.begin(), nums.size(), 0);
	for(auto n : nums){
		cout << n << endl;
	}
	system("pause");

}
