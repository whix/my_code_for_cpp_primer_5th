//list������֧��������ʣ�sort�㷨��Ҫ������ʹʲ���ʹ��  20141202   wan
//��Ȼ����unique�㷨��������list������Ч�ʲ���
//��Ӧʹ��list�������е�sort/unique�����������Դ���unique���Զ�ɾ���ظ�����

#include <iostream>
#include <algorithm>
#include <fstream>
#include <list>
#include <string>
using namespace std;

void elimDups(list<string> &lstr){
	lstr.sort();
	lstr.unique();
}

int main(){
	ifstream in("word");
	string tmp;
	list<string> words;
	while(in >> tmp){
		words.push_back(tmp);
	}
	elimDups(words);
	for_each(words.begin(), words.end(), 
			 [](const string &s){ cout << s << "  ";});
	cout << endl;
	system("pause");

}

