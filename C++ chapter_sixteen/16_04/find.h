#ifndef FIND_H
#define FIND_H
#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <iterator>
using std::cout; using std::string; using std::cin; using std::vector; 
using std::list; using std::iterator; using std::endl;




	template<typename Tit, typename Tval>
	Tit find(const Tit &first, const Tit &last, const Tval &s)
	{
		cout << "it is me!" << endl;
		auto iter = first;
		while (iter != last && *iter != s) ++iter;
		return iter;
		
	}


#endif // !FIND_H
