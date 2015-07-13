#include "mystrblob.h"
#include "mystrblobptr.h"

MyStrBlob::~MyStrBlob(){};

void MyStrBlob::check(size_type i, const string &msg)const
{
	if (i >= data->size())
	{
		throw out_of_range(msg);
	}
}


void MyStrBlob::pop_back()
{
	check(0, "pop_back on empty MyStrBlob.");
	data->pop_back();
}


string& MyStrBlob::front()
{
	check(0, "front on empty MyStrBlob.");
	return data->front();
}


const string& MyStrBlob::front()const
{
	check(0, "front on empty MyStrBlob.");
	return data->front();
}


string& MyStrBlob::back()
{
	check(0, "back on empty MyStrBlob.");
	return data->back();
}


const string& MyStrBlob::back()const
{
	check(0, "back on empty MyStrBlob.");
	return data->back();
}


MyStrBlobPtr MyStrBlob::begin()
{ 
	return MyStrBlobPtr(*this); 

}


MyStrBlobPtr MyStrBlob::end()
{
	auto ret = MyStrBlobPtr(*this, data->size());
	return ret;
}