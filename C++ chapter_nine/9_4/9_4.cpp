//vs2012不支持容器的列表初始化  20141128 wan
#include<iostream>
#include<vector>

using namespace std;

bool find_int(vector<int>::const_iterator b,	//指向常量的迭代器，
			  vector<int>::const_iterator e,	//ps.在类型前面加const表示常量迭代器，不能改变迭代器的指向位置
			  const int x){  
														  
	while (b != e)
	{
		if(*b++ == x)
			return 1;
	}
	return 0;
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

	auto beg = nums.begin();
	auto end = nums.end();
	cout << "which num do you want to find :" << endl;
	while(cin >> temp){
		if(find_int(beg, end, temp))
			cout << "The num exist." << endl;
		else cout << "The num DON'T exist." << endl;
		cout << "which num do you want to find(Ctrl+Z to END) :" << endl;
	}

}
