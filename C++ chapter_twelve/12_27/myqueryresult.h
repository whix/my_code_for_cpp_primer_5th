#ifndef MYQUERYRESULT
#define MYQUERYRESULT
#include "mytextquery.h"
#include <iostream>
#include <memory>
using namespace std;

class MyQueryResult
{
public:
	MyQueryResult() = default;
	MyQueryResult(const MyTextQuery &tq, const string &str);
	~MyQueryResult() = default;

	friend ostream& print_resule(ostream&, MyQueryResult&);

private:
	shared_ptr<vector<string>> text_ptr;
	shared_ptr<set<int>> line_num;
	string word;
	size_t times;
};



#endif // !MYQUERYRESULT
