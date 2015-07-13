#include "myqueryresult.h"



MyQueryResult::MyQueryResult(const MyTextQuery &tq, const string &str)
{
	text_ptr = tq.text;
	word = str;
	auto ret = tq.word_line->find(word);
	if (ret == tq.word_line->cend())
	{
		cout << "The word '" << str << "' do NOT exist." << endl;
		times = 0;
		line_num = make_shared<set<int>>();
	}
	else
	{
	
		line_num = make_shared<set<int>>(ret->second);
		times = ret->second.size();
	}

}



ostream& print_resule(ostream &os, MyQueryResult &qr)
{
	os << qr.word << " occurs " << qr.times << " times" << endl;
	for (auto num : *qr.line_num)
	{
		os << "\t" << "(line " << num << ") " << (*qr.text_ptr)[num - 1] << endl;
	}
	return os;
}
