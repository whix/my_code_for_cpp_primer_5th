//写一个vecter迭代输出函数 20141112 wan
#include<iostream>
#include<string>
#include<vector>
using std::cin;using std::cout;using std::endl;using std::string;using std::vector;

void print_vec(vector<int>::iterator it1, vector<int>::iterator it2)
{
	if (it1 != it2)
	{
		cout << *it1 << endl;
		print_vec(++it1, it2);
	}
	if (it1 == it2)
		return;
}


int main()
{
	vector<int> inum;
	int num;
	cout <<"Enter nums: " << endl;
	while (cin >> num)
	{
		inum.push_back(num);
	}
	print_vec(inum.begin(), inum.end());

	system("pause");
}
