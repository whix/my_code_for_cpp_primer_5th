#ifndef MYSTRBLOB_H
#define MYSTRBLOB_H
#include <iostream>
#include <vector>
#include <string>
#include <memory>
#include <stdexcept>
using namespace std;

class MyStrBlobPtr;
class MyStrBlob
{
	friend class MyStrBlobPtr;
public:
	typedef vector<string>::size_type size_type;
	MyStrBlob() :data(make_shared<vector<string>>()){};
	MyStrBlob(initializer_list<string> &il)
		:data(make_shared<vector<string>>(il)){};
	~MyStrBlob();
	size_type size()const { return data->size(); }
	bool empty()const { return data->empty(); }
	void push_back(const string &s){ data->push_back(s); }
	void pop_back();

	string& front();
	const string& front()const;
	string& back();
	const string& back()const;

	MyStrBlobPtr begin();
	MyStrBlobPtr end();

private:
	shared_ptr<vector<string>> data;
	void check(size_type i, const string &msg)const;

};


#endif // !MYSTBLOB_H
