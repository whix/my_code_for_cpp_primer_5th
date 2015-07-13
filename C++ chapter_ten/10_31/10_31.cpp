//输入流和输出流迭代器的结合使用(改写10.30，用unique_copy函数)  20141202  wan
#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>
#include <string>
using namespace std;

int main(){
	vector<int> nums;
	int tmp;
	cout << "Enter some nums(Ctrl+Z to end): " << endl;
	istream_iterator<int> in_it(cin), eof;
	while(in_it != eof){
		nums.push_back(*in_it++);
	}
	sort(nums.begin(), nums.end());
	ostream_iterator<int> out_it(cout, " ");	//每次写到输出流后加个空格
	unique_copy(nums.cbegin(), nums.cend(), out_it);
	
	system("pause");
}
