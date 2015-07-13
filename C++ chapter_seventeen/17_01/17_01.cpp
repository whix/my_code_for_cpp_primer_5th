#include <iostream>
#include <string>
#include <vector>
#include <tuple>
using namespace std;

int main()
{
	tuple<int, int, int> int_tup(10, 20, 30);
	tuple<string, vector<string>, pair<string, int>>
		mix_tup("hello", { "miss you", "who knows" }, make_pair("I don't know", 88));
	cout << get<0>(int_tup) << endl; 
	cout << get<1>(int_tup) << endl; 
	cout << get<2>(int_tup) << endl;
	cout << get<0>(mix_tup) << endl;
	auto vec = get<1>(mix_tup);
	for (auto v : vec)
	{
		cout << v << endl;
	}
	auto pa = get<2>(mix_tup);
	cout << pa.first << endl;

	system("pause");

}