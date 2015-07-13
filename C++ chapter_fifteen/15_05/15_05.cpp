#include <iostream>
#include <string>
#include "quote.h"
using namespace std;

class Bulk_quote : public Quote
{
public:
	Bulk_quote() = default;
	Bulk_quote(const string &book, double price, size_t qty, double disc) :  
				Quote(book, price), min_qty(qty), discount(disc) {	}
	~Bulk_quote() = default;
	double net_price(size_t n)const;

private:
	size_t min_qty;
	double discount;

};

double Bulk_quote::net_price(size_t n)const
{
	if (n > min_qty)
	{
		return n * price * (1 - discount);
	}
	else return n * price;
}

double print_total(std::ostream& os, const Quote& item, size_t n);


//copy from https://github.com/Mooophy/Cpp-Primer/blob/master/ch15/ex15.5.6/main.cpp
int main()
{
	//! ex15.6
	Quote q("textbook", 10.60);
	Bulk_quote bq("textbook", 10.60, 10, 0.3);

	print_total(std::cout, q, 12);
	print_total(std::cout, bq, 12);

	system("pause");
	return 0;
}

double print_total(std::ostream &os, const Quote &item, size_t n)
{
	double ret = item.net_price(n);

	os << "ISBN:" << item.isbn()
		<< "# sold: " << n << " total due: " << ret << std::endl;

	return ret;
}