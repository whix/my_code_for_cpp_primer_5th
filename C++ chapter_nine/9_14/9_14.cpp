#include<iostream>
#include<list>
#include<vector>
#include<string>

using namespace std;

int main(){
	list<char*> lis1(10,"One");
	vector<string> vec;
	vec.assign(lis1.begin(), lis1.end());
	for(auto c : vec){
		cout << c << "  ";
	}
	cout << endl;

//	system("pause");


}
