//利用list<int>初始化vector<double> 20141129 wan

#include<iostream>
#include<list>
#include<vector>

using namespace std;

int main(){
	list<int> lis1(10,3);
	auto it1 = lis1.begin(),
		 it2 = lis1.end();

	vector<double> vec(++it1, --it2);		//list只支持迭代器的自增或自减以及== 和 != 操作
											//复制vec中的第2到9个元素
	for(auto c : vec){
		cout << c << endl;
	}

	system("pause");

}
