//注意map使用insert时候的返回值
#include <iostream>
#include <map>
#include <string>
#include <vector>
using namespace std;

pair<map<string, vector<int>>::iterator, bool> test(map<string, vector<int>> str_vec, 
													string str, vector<int> vec){
	return str_vec.insert(make_pair(str, vec));
}


int main(){
	map<string, vector<int>> str_vec;
	string str;
	vector<int> vec;
}
