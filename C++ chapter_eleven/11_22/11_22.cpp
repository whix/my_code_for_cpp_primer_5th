//ע��mapʹ��insertʱ��ķ���ֵ
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
