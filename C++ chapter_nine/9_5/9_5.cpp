//��д��ϰ9_4�����ص�����  20141129 wan
#include<iostream>
#include<vector>

using namespace std;

vector<int>::const_iterator find_int(vector<int>::const_iterator b,   //��Ҫ���Ƿ�������ҲҪ�ĳ�const_iterator
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
//	nums = {1,2,3,4,5,6,7,8,9,10};			//vs2012��֧���б��ʼ��
	for (int i = 0; i < 100; i++)			//100���ڵ�ż������nums��
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
