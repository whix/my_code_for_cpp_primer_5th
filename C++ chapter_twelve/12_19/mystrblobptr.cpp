#include "mystrblob.h"
#include "mystrblobptr.h"

MyStrBlobPtr::~MyStrBlobPtr(){};
shared_ptr<vector<string>> MyStrBlobPtr::check(size_t i, const string &msg)const
{
	auto ret = wptr.lock();
	if (!ret)
		throw runtime_error("unbound MyStrBlobPtr");
	if (i >= ret->size())
		throw out_of_range(msg);
	return ret;
}
string& MyStrBlobPtr::deref()const
{
	auto p = check(curr, "dereference past end");
	return (*p)[curr];
}
MyStrBlobPtr& MyStrBlobPtr::incr()
{
	check(curr, "increment past end of MyStrBlobPtr");
	++curr;
	return *this;
}
