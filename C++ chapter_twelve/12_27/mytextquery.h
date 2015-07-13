#ifndef MYTEXTQUERY_H
#define MYTEXTQUERY_H
#include <string>
#include <vector>
#include <map>
#include <set>
#include <fstream>
#include <memory>
#include <sstream>
using namespace std;

class MyQueryResult;

class MyTextQuery
{
public:
	friend class MyQueryResult;
	MyTextQuery() = default;
	MyTextQuery(ifstream &fin);
	MyQueryResult query(const string&)const;
	~MyTextQuery() = default;

private:
	shared_ptr<vector<string>> text;
	shared_ptr<map<string, set<int>>> word_line;
};



#endif // !MYTEXTQUERY_H
