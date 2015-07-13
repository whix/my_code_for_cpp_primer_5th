#include "find.h"
#include <iostream>

int main()
{
	vector<string> vec_str = { "hi", "hello", "world", "shit" };
	list<int> lis_int = { 1, 3, 5, 7, 9 };
	auto it = ::find(vec_str.cbegin(), vec_str.cend(), "hi");
	cout << *it << endl;
	auto it2 = std::find(lis_int.cbegin(), lis_int.cend(), 3);
	cout << *it2 << endl;

	system("pause");

}
