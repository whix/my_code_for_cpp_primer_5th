//ע��find���ص����ͣ��Ƕ�Ӧmap�ĵ�������δ���ҵ�����β�������  20141206 wan
#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;

int main(){
	vector<int> temp(10,1);
	map<string, vector<int>> str_vint;
	str_vint.insert(make_pair("kill", temp));
	map<string, vector<int>>::iterator find_it;
	string k("kill");
	find_it = str_vint.find(k);
}
