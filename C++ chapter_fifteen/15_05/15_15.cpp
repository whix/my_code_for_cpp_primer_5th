#include "quote.h"
#include <iostream>
#include <string>

class Disc_quote : public Quote
{
public:
	Disc_quote() = default;
	Disc_quote(const string &book, double p, size_t qty, double disc) : 
				Quote(book, p), book_qty(qty), discount(disc){	}
	~Disc_quote() = default;
	double net_price(size_t)const = 0;
protected:
	size_t book_qty = 0;
	double discount = 0.0;
};

class Bulk_quote : public Disc_quote
{
public:
	Bulk_quote() = default;
	Bulk_quote(const string &book, double p, size_t qty, double disc) : 
				Disc_quote(book, p, qty, disc) { }
	double net_price(size_t)const override;
};

double Bulk_quote::net_price(size_t qty)const
{
	if (qty > book_qty)
		return qty * price * (1 - discount);
	else return qty * price;
}

int main()
{
	Bulk_quote bq("0-000-111", 12.89, 10, 0.2);
	cout << bq.net_price(20);
	system("pause");
	return 0;
}