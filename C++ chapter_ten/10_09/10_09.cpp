#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int main(){
	vector<string> vacab;
	string word;
	cout << "Enter the words(Ctrl + Z to end):" << endl;
	while (cin >> word)
	{
		vacab.push_back(word);
	}
	sort(vacab.begin(), vacab.end());
	auto end_unique = unique(vacab.begin(), vacab.end());
	vacab.erase(end_unique, vacab.end());
	for(auto v : vacab){
		cout << v << endl;
	}

	system("pause");


}
