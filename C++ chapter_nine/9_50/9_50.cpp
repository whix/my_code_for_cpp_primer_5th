//��intֵת��Ϊ�ַ�������string���͵�vector�У��ٰ�vector��ÿ��Ԫ��ת����int���ܺ� 20141130 wan

#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
	vector<string> str_nums;
	for (int i = 0; i < 10; i++)
	{
		str_nums.push_back(to_string(i));
	}
	int sum = 0;
	for(auto v : str_nums){
		sum += stoi(v);
	}
	cout << sum << endl;

	system("pause");
	return 0;
}
