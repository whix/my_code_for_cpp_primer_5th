//10.34&10.35  20141202  wan

#include <iostream>
#include <vector>
#include <iterator>
using namespace std;

int main(){
	vector<int> nums;
	for (int i = 0; i < 10; i++)
	{
		nums.push_back(i);
	}
	//ʹ��reverse_iterator�����ӡ
	for(auto it = nums.crbegin(); it != nums.crend(); ++it){
		cout << *it << endl;
	}
	auto it = nums.cend();		//ʹ����ͨ�����������ӡ
	do
	{
		--it;
		cout << *it << endl;
	} while (it != nums.cbegin());
	system("pause");

}
