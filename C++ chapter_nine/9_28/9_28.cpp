//学习了往forward_list最后添加元素，  20141130 wan

#include <iostream>
#include <forward_list>
#include <string>
#include <vector>
using namespace std;

void flist_find(forward_list<string>& flis, string s1, string s2){
	vector<string> temp;
	auto curr = flis.begin();
	int flag = 0;
	while(curr != flis.end()){
		if (*curr == s1)
		{
			flis.emplace_after(curr, s2);
			flag = 1;
			return;
		}
		else ++curr;
	}
	
	if(flag == 0){
		temp.assign(flis.begin(), flis.end());
		temp.push_back(s2);
//		flis.clear();
		flis.assign(temp.begin(), temp.end());
	}


}


int main(){
	cout << "Enter some strings for forward_list(Ctrl + Z to end): " << endl;
	string word, str1, str2;
	forward_list<string> flis; 
	auto it = flis.before_begin();
	while(cin >> word){
		it = flis.emplace_after(it, word);
	}

	cin.clear();			//清除cin状态，否则直接跳过下面的cin

	cout << "Enter one str for search, one for insert :" << endl;
	cin >> str1 >> str2;
	flist_find(flis, str1, str2);

	for(auto f : flis){
		cout << f << endl;
	}
	system("pause");
	return 0;

}

