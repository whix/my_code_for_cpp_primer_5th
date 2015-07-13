//11.31 & 11.32        20141206 wan
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <fstream>
using namespace std;

int main(){
	ifstream in("authors.txt");
	multimap<string, string> authors;
	string author, book, eauthor;
	while(in >> author >> book){
		authors.insert(make_pair(author, book));
	}
	in.clear();
	cout << "The authors and the books: " << endl;
	for(auto a : authors){
			cout << a.first << " : " << a.second <<endl;
		}
	cout << "Enter the author you want to erase: " << endl;
	while(cin){
		cin >> eauthor;
		auto iter = authors.find(eauthor);
		auto cnt = authors.count(eauthor);
		if(cnt == 0){
			cout << "The author do NOT exist in above list." << endl << endl;
		}

		while(cnt){
			iter = authors.erase(iter);
			--cnt;
		}
		cout << "The result of erasing :" << endl;
		for(auto a : authors){
			cout << a.first << " : " << a.second <<endl << endl;
		}
		cout << "Enter the author you want to erase: " << endl;

	}

	system("pause");

}
