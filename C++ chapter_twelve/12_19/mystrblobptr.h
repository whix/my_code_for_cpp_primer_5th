#ifndef MYSTRBLOBPTR_H
#define MYSTRBLOBPTR_H

#include <iostream>
#include <vector>
#include <string>
#include <memory>
#include <stdexcept>
using namespace std;


class MyStrBlobPtr
{
public:
	MyStrBlobPtr() :curr(0){}
	MyStrBlobPtr(MyStrBlob &a, size_t sz = 0) :wptr(a.data), curr(sz){}
	~MyStrBlobPtr();

	string& deref()const;
	MyStrBlobPtr& incr();

private:
	shared_ptr<vector<string>> check(std::size_t, const string&)const;
	weak_ptr<vector<string>> wptr;
	size_t curr;

};

#endif // !MYSTRBLOBPTR_H