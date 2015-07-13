//注意erase操作中返回的iterator问题， 20141129 wan

#include <iostream>
#include <list>
#include <vector>
using namespace std;

int main(){
	int ia[] = {0, 1, 1, 2, 3, 5, 8, 13, 21, 55, 89};
	vector<int> vec_odd;
	list<int> lis_even;
	vec_odd.assign(begin(ia), end(ia));			//从数组复制数据
	lis_even.assign(begin(ia), end(ia));
	for (auto it = vec_odd.begin(); it != vec_odd.end(); )  //删除vec中的偶数元素
	{
		if((*it) % 2 == 0){
			it = vec_odd.erase(it);							//删除元素后返回it
		}
		else ++it;
	}

	for (auto it1 = lis_even.begin(); it1 != lis_even.end(); ) //删除list中的奇数元素
	{
		if((*it1) % 2 == 1){
			it1 = lis_even.erase(it1);						//删除元素后返回it1
		}
		else ++it1;
	}
	
	cout << "The list<int>:" << endl;		//输出
	for(auto l : lis_even){
		cout << l << " ";
	}
	cout << endl;

	cout << "The vector<int>:" << endl;		//输出
	for(auto v : vec_odd){
		cout << v << " ";
	}
	cout << endl;

	system("pause");
	return 0;

}
