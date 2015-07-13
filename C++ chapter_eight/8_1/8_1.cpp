//ÂÔ£¬¼ûp281 20141115 wan

#include<iostream>
#include<string>
#include<vector>

using std::endl;using std::cin;using std::cout;using std::string;using std::vector;

std::istream& in_and_out(std::istream& is)
{
	auto old_state = is.rdstate();
	string temp;
	vector<string> in_date;
	while (!is.eof())
	{
		while(is >> temp)
			in_date.push_back(temp);
	}
	cout << "Output the stream:" << endl;
	for (auto s : in_date)
	{
		cout << s << " ";
	}
	is.setstate(old_state);
	return is;
}


int main()
{
	in_and_out(cin);

	system("pause");
}
