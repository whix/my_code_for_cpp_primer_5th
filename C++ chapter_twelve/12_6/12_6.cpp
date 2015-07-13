#include <iostream>
#include <vector>
#include <memory>
using namespace std;

vector<int>* creat_new()
{
	return new vector<int>;
}

vector<int>* in_data(vector<int> *nums)
{
	int tmp;
	while (cin >> tmp)
	{
		nums->push_back(tmp);
	}
	return nums;

}

void print(vector<int>* nums)
{
	for (auto n : *nums)
	{
		cout << n << ", ";
	}
	cout << endl;
}

int main()
{
	vector<int>* ptr_v = creat_new();
	in_data(ptr_v);
	print(ptr_v);

	delete ptr_v;

	
}