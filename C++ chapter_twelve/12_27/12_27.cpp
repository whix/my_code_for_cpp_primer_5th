#include "myqueryresult.h"
#include "mytextquery.h"
#include <iostream>
#include <string>
#include <fstream>

void runQueries(ifstream &infile)
{
	MyTextQuery tq(infile);
	while (true)
	{
		cout << "Enter word to look for, or 'q' to quit: ";
		string s;
		if (!(cin >> s) || s == "q") break;
			print_resule(cout, tq.query(s));
	}
}

int main()
{
	runQueries((ifstream)"eassy.txt");
}