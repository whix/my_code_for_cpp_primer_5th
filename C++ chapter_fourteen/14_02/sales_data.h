#ifndef SALES_DATA_H
#define SALES_DATA_H
#include <iostream>
#include <string>
using namespace std;

class Sales_data
{
	friend ostream& operator<<(ostream&, const Sales_data&);
	friend istream& operator>>(istream&, Sales_data&);
	friend Sales_data operator+(const Sales_data&, const Sales_data&);
	
public:
	Sales_data(const string &s = " ") : book_No(s){}
	Sales_data(const string &s, unsigned n, double p):
		book_No(s), num(n), revenue(n*p){}
	Sales_data(const Sales_data &sd):
		book_No(sd.book_No), num(sd.num), revenue(sd.revenue){}
	Sales_data& operator+=(const Sales_data&);
	~Sales_data() = default;
	string isbn()const;
	double avg_price()const;

private:
	string book_No;
	unsigned num = 0;
	double revenue = 0.0;

};



#endif // !SALES_DATA_H

