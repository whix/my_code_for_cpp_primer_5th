//20141130 wan
#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdlib>
using namespace std;

int main(){
	vector<int> nums;
	for (int i = 0; i < 100; i++)
	{
		nums.push_back(rand() % 11);
	}
	cout << "The count is: " << count(nums.begin(), nums.end(), 9) << endl;

	int cnt = 0;
	for(auto n : nums){
		cout << n << "\t";
		++cnt;
		if(cnt == 10){
			cout << endl;
			cnt = 0;
		}

			
	}

	system("pause");
	return 0;

}
