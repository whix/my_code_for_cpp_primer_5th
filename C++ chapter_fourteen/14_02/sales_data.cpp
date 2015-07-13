#include "sales_data.h"


Sales_data& Sales_data::operator+=(const Sales_data &sd)
{
	num += sd.num;
	revenue += sd.revenue;
	return *this;
}

string Sales_data::isbn()const
{
	return book_No;
}

double Sales_data::avg_price()const
{
	if (num == 0)
		return 0.0;
	else return revenue / num;
}

ostream& operator<<(ostream &os, const Sales_data &sd)
{
	os << sd.isbn() << " " << sd.num << " "
		<< sd.revenue << " " << sd.avg_price();
	return os;
}

istream& operator>>(istream &is, Sales_data &sd)
{
	double price;
	is >> sd.book_No >> sd.num >> price;
	if (is)
		sd.revenue = sd.num * price;
	else
	{
		sd = Sales_data();
	}
	return is;
}

Sales_data operator+(const Sales_data &lhs, const Sales_data &rhs)
{
	Sales_data sum = lhs;
	sum += rhs;
	return sum;
}