//利用迭代器把一组整数中的第n个数和倒数第n个数相加后输出。 20141108 wan

#include<iostream>
#include<string>
#include<vector>

using std::cin; using std::cout; using std::endl; using std::string;using std::vector;

int main()
{
	vector<int> vec_num;
	int num;
	//读取数据，存入
	cout << "Enter the num(Ctrl+Z to end): " << endl;
	while(cin >> num)
		vec_num.push_back(num);
	//没有数据则输出信息
	if(vec_num.size() == 0){
		cout << "No element?!" << endl;
		return -1;
	}

	cout << "Sum of pair of counterpart elements in the vector: "
		 << endl;

	//每次配对相加后，前后迭代器向中间移一位
	for (vector<int>::iterator first = vec_num.begin(),
							   last = vec_num.end() - 1;
							   first <= last;
							   ++first, --last){
		if(first == last)
			cout << endl
				 << "The center element is not been summed "
				 << "and its value is "
				 << *first
				 << endl;
		else
			cout << *first + *last << "\t";
	}

	system("pause");
	return 0;
}