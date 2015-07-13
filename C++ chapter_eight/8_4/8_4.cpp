//编写程序，以只读模式打开一个文件，将其内容读到一个string的vector中，然后输出到一个文件中 20141127 wan 

#include<fstream>
#include<string>
#include<vector>
#include<iostream>

using namespace std;
//using std::endl;using std::cin;using std::cout;using std::string;using std::vector;

vector<string> in_data;

void get(string s)
{
	string temp;
	ifstream in_str(s);
	while(in_str >> temp)
		in_data.push_back(temp);
	in_str.close();
}

void out_data(vector<string>& vec)
{
	ofstream out("word_copy");
	int cnt = 0;
	for(auto s : vec)
	{
		++cnt;
		out << s;
		if (s.size() > 8)
		{
			out << "\t";
		}
		else out << "\t\t";
		cout << s;
		if (s.size() >= 8)
		{
			cout << "\t";
		}
		else cout << "\t\t";
		if(cnt == 5)
		{
			out << endl;
			cout << endl;
			cnt = 0;
		}	
	}
	out.close();

}



int main()
{
	string s("word");
	get(s);
	out_data(in_data);
	cout << endl;

	system("pause");

}
