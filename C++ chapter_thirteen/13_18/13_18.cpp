//ÿ��id�Ĳ�����Ҫ����static�������ǿ������ƻ��ǿ������캯��   20141212    wan

#include <iostream>
#include <string>
using namespace std;

class Employee
{
public:
	Employee() : name(string()), id(idGenerator()){}
	Employee(const string &s) : name(s), id(idGenerator()){}
	Employee(const Employee &);
	Employee& operator=(Employee &);
	~Employee() = default;

private:
	string name;
	unsigned int id;
	unsigned idGenerator();

};

Employee::Employee(const Employee &em)
{
	name = em.name;
	id = idGenerator();

}

Employee& Employee::operator=(Employee &emm)
{
	name = emm.name;
	id = idGenerator();
	return *this;
}

unsigned Employee::idGenerator()
{
	static unsigned i = 0;
	return ++i;
}


