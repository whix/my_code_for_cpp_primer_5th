//vs2012��֧���������б��ʼ��  20141128 wan
#include<iostream>
#include<vector>

using namespace std;

bool find_int(vector<int>::const_iterator b,	//ָ�����ĵ�������
			  vector<int>::const_iterator e,	//ps.������ǰ���const��ʾ���������������ܸı��������ָ��λ��
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
//	nums = {1,2,3,4,5,6,7,8,9,10};			//vs2012��֧���б��ʼ��
	for (int i = 0; i < 100; i++)			//100���ڵ�ż������nums��
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
