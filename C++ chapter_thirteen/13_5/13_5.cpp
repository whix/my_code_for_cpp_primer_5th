//20141214  wan
#include <iostream>
#include <string>
using namespace std;

class HasPtr
{
public:
	HasPtr(const string &s = string()) :
		ps(new string(s)), i(0){}
	HasPtr(const HasPtr &hp):
		ps(new string(*hp.ps)), i(hp.i)
		{
		cout << "done!" << endl;
		}
	~HasPtr() = default;

private:
	string *ps;
	int i;
};

int main()
{
	HasPtr ptr1;
	HasPtr ptr2(ptr1);
	system("pause");
}

