#include "mytextquery.h"
#include "myqueryresult.h"

using namespace std;


MyTextQuery::MyTextQuery(ifstream &fin)
{
	text = make_shared<vector<string>>();
	word_line = make_shared<map<string, set<int>>>();
	string t;
	int cnt = 0;
	while (getline(fin, t))
	{
		text->push_back(t);
		++cnt;
		istringstream line(t);
		string word;

		while (line >> word)
		{
			(*word_line)[word].insert(cnt);
			//set<int> tmp_set;

			//auto ret = word_line->find(word);
			//if (ret != word_line->cend())
			//{
			//	ret->second.insert(cnt);
			//}
			//else
			//{
			//	tmp_set.insert(cnt);
			//	word_line->insert(make_pair(word, tmp_set));
			//}
		}
	}

}

MyQueryResult MyTextQuery::query(const string &word)const
{
	MyQueryResult tmp(*this, word);
	return tmp;
}
