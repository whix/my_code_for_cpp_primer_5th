//�ַ����� 20141130 wan
#include <iostream>
#include <string>
using namespace std;

int main(){
	string str("ab2c3d7R4E6");
	auto pos = 0;
	pos = str.find_first_of("0123456789",pos);
	while( pos != string::npos){
		cout << pos << endl;
		pos = str.find_first_of("0123456789", ++pos); //����һλ��ʼ���ң���Ȼ�Ῠ����pos=2��
	}
	system("pause");
	return 0;
}
