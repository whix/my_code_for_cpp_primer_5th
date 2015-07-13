//Myblob函数			20141209  wan
//添加了const版本的front，back
//不需要const版本的pushback，popback函数，因为Myblob中的数据成员data是指针
#include <iostream>
#include <vector>
#include <string>
#include <memory>
using namespace std;

class Myblob
{
public:
	typedef vector<string>::size_type size_type;
	Myblob();
	Myblob(initializer_list<string> &il);
	~Myblob();
	size_type size()const { return data->size(); }
	bool empty()const { return data->empty(); }
	void push_back(const string &s){	data->push_back(s);}
	void pop_back(); 

	string& front();
	const string& front()const;
	string& back();
	const string& back()const;

private:
	shared_ptr<vector<string>> data;
	void check(size_type i, const string &msg)const;

};

Myblob::Myblob()
{
	data = make_shared < vector<string> > ();
}
Myblob::Myblob(initializer_list<string> &il)
{
	data = make_shared<vector<string>>(il);
}

Myblob::~Myblob()
{
}

void Myblob::check(size_type i, const string &msg)const
{
	if (i >= data->size())
	{
		throw out_of_range(msg);
	}
}
void Myblob::pop_back()
{
	check(0, "pop_back on empty Myblob.");
	data->pop_back();
}
string& Myblob::front()
{
	check(0, "front on empty Myblob.");
	return data->front();
}
const string& Myblob::front()const
{
	check(0, "front on empty Myblob.");
	return data->front();
}
string& Myblob::back()
{
	check(0, "back on empty Myblob.");
	return data->back();
}
const string& Myblob::back()const
{
	check(0, "back on empty Myblob.");
	return data->back();
}


int main()
{
	return 0;
}
