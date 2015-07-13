#ifndef QUOTE_H
#define QUOTE_H


#include <iostream>
#include <string>
using namespace std;

class Quote
{
public:
	Quote() = default;
	Quote(const string &book, double sales_price) :
		bookNo(book), price(sales_price) { }
	virtual double net_price(size_t n)const
	{
		return n*price;
	}
	virtual ~Quote() = default;
	string isbn()const{ return bookNo; }

protected:
	double price = 0.0;
private:
	string bookNo;

};
#endif // !QUOTE_H