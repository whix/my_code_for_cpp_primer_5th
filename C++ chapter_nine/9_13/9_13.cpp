//����list<int>��ʼ��vector<double> 20141129 wan

#include<iostream>
#include<list>
#include<vector>

using namespace std;

int main(){
	list<int> lis1(10,3);
	auto it1 = lis1.begin(),
		 it2 = lis1.end();

	vector<double> vec(++it1, --it2);		//listֻ֧�ֵ��������������Լ��Լ�== �� != ����
											//����vec�еĵ�2��9��Ԫ��
	for(auto c : vec){
		cout << c << endl;
	}

	system("pause");

}
