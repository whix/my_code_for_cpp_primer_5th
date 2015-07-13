//把奇数加倍后输出~20141110 wan

#include<iostream>
#include<string>
#include<vector>

using std::cout;using std::cin;using std::endl;using std::string;using std::vector;

int main()
{
	vector<int> vec_int;
	int num;
	cout << "Enter the num (Ctrl+Z to end):" << endl;
	while(cin >> num)
		vec_int.push_back(num);

	for(auto &n : vec_int){
		if (n%2 == 1)
			n *= 2;
	}

	cout << "Show the nums have changed: " << endl;
	for(auto n : vec_int)
		cout << n << "\t";

	system("pause");
	return 0;

}
