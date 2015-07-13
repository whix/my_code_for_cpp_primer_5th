//
#include<iostream>
#include<vector>
#include<string>
#include<sstream>

using namespace std;

istream& in_from_istream(istream& is)
{
	auto old_state = is.rdstate();
	is.clear();
	vector<string> vec_str;
	string temp;
	while( getline(is,temp) )			//getline()函数的用法
	{
//		istringstream record(temp);
		vec_str.push_back(temp);
	}
	for(auto s : vec_str)
	{
		cout << s << endl;
	}
	is.setstate(old_state);

	return is;
}


int main()
{
	in_from_istream(cin);

	system("pause");
}
