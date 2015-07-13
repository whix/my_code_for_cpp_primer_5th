//调试失败，应该是stable_sort出现问题   20141202  wan
#include <iostream>
#include <algorithm>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

void elimDups(vector<string>& vec_s){
	sort(vec_s.begin(), vec_s.end());
	auto erase_beg = unique(vec_s.begin(), vec_s.end());
	vec_s.erase(erase_beg, vec_s.end());
}

void biggies(vector<string>& vec_ss, string::size_type sz){
	elimDups(vec_ss);
	stable_sort(vec_ss.begin(), vec_ss.end(), 
				[](const string& s1, const string& s2)
				{ return s1.size() < s1.size();});
	auto wc = find_if(vec_ss.begin(), vec_ss.end(), 
					  [sz](const string& s3)
					  { return s3.size() >= sz;});
	auto cnt = vec_ss.end() - wc;
	cout << cnt << " " << "words" << "of length " 
		 << sz << " or longer" << endl;			
	for_each(wc, vec_ss.end(), [](const string& s)
			 { cout << s << " "; });
	cout << endl;

}

int main(){
	ifstream in("word");
	string tmp;
	vector<string> words;
	while (in >> tmp){
		words.push_back(tmp);
	}
	biggies(words, 13);

	system("pause");
}
