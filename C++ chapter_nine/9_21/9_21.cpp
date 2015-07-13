//insert 是插入所给迭代器的前一位  20141129 wan
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
	vector<string> vec;
	string word;
	while( cin >> word){
		vec.insert(vec.end(),word);
	}
	cout << "the sentence:" << endl;
	for(auto v : vec){
		cout << v << " ";
	}
	cout << endl;

	system("pause");

}
