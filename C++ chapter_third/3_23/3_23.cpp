//创建10个整数的vector对象，然后使用迭代器将所有元素的值变成原来的两倍。输出。。 20141108

#include<iostream>
#include<string>
#include<cctype>
#include<vector>

using std::cin; using std::cout; using std::endl; using std::string;using std::vector;

int main()
{
	vector<int> vec_num(10);
	cout << "Enter 10 nums :" <<endl;
	for (auto it = vec_num.begin(); it != vec_num.end(); it++)
	{
		cin >> *it;
	}
	cout << "The two times nums: " << endl;
	for (auto it2 = vec_num.begin(); it2 != vec_num.end(); it2++)
	{
		*it2 = *it2 * 2;
		cout << *it2 <<endl;
	}

	system("pause");
	return 0;
}