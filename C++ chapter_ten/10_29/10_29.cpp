//�������ĵ�����Ĭ�Ϲ��캯������һ���յ�����������		20141202  wan
//���Ե�����������ָ��һ���յ�λ�û�����λ�ã�
//����֪�����������������е���str_eof
#include <iostream>
#include <vector>
#include <string>
#include <fstream>
using namespace std;

int main(){
	ifstream in("word");
	istream_iterator<string> str_it(in);
	istream_iterator<string> str_eof;			//β�������
	vector<string> str;
	string tmp;
	while(str_it != str_eof)
		str.push_back(*str_it++);
	for(auto s : str){
		cout << s << "  ";
	}
	cout << endl;
	system("pause");

}
