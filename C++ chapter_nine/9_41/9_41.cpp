//利用vector<char>初始化一个string
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
	vector<char> vchar;
	char ia[] = {'a', 'b', 'c', 'd', 'e', 'f'};
	for(auto a : ia){
		vchar.push_back(a);
	}
	string str(vchar.begin(), vchar.end());
	cout << str << endl;

	system("pause");
	return 0;
}
