#include <iostream>
#include <string>
using namespace std;

class My_HasPtr
{
public:
	My_HasPtr(const string &s = string()):
		ps(new string(s)), i(0), use(new size_t(1))	{ }
	My_HasPtr(const My_HasPtr &hp):
		ps(hp.ps), i(hp.i), use(hp.use)  { ++*use;  }
	My_HasPtr&
	operator=(const My_HasPtr &hp);
	~My_HasPtr();
	size_t show_use()const	{ return *use; }

private:
	string *ps;
	int i;
	size_t *use;
};
My_HasPtr&
My_HasPtr::operator=(const My_HasPtr &hp)
{
	++*hp.use;
	if (--*use)
	{
		delete ps;
		delete use;
	}
	use = hp.use;
	ps = hp.ps;
	i = hp.i;
	return *this;
}

My_HasPtr::~My_HasPtr()
{
	if (--*use)
	{
		delete ps;
		delete use;
	}
}

int main()
{

}