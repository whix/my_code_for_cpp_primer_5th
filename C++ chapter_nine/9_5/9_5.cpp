//改写练习9_4，返回迭代器  20141129 wan
#include<iostream>
#include<vector>

using namespace std;

vector<int>::const_iterator find_int(vector<int>::const_iterator b,   //不要忘记返回类型也要改成const_iterator
							   vector<int>::const_iterator e, 
							   const int x){
	while (b != e)
	{
		if(*b == x){
			return b;	
		}
		else ++b;

	}
	return e;
}


int main(){
	int temp;
	vector<int> nums;
//	nums = {1,2,3,4,5,6,7,8,9,10};			//vs2012不支持列表初始化
	for (int i = 0; i < 100; i++)			//100以内的偶数存入nums中
	{
		if(i % 2 == 0)
			nums.push_back(i);
	}

	auto beg = nums.cbegin();
	auto end = nums.cend();
	cout << "which num do you want to find :" << endl;
	while(cin >> temp){
		auto it = find_int(beg, end, temp);
		if (it != end){
			cout << "The num exist." << endl << *it << endl;
		}	
		else cout << "The num DON'T exist." << endl;
		cout << "which num do you want to find(Ctrl+Z to END) :" << endl;
	}

}
