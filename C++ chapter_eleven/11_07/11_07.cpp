//map�д���vector��list���������ø�����࣬ע��	20141203  wan

#include <iostream>
#include <vector>
#include <string>
#include <map>

using namespace std;

//����Ӻ�������д��main()���������Ի���
//�����ж�ʹ�ó�ֵ����
void print_family(const map<string, vector<string>> &f){
	//��family�÷�Χfor����ÿ����ͬsurname��������pair
	for(const auto &p : f){
		cout << p.first << " has " << p.second.size()
			 << " children. They are: ";
		//��pair�еĵڶ���ֵʹ�÷�Χfor���������ÿ�����ӵ�����
		for(const auto &v : p.second){
			cout << v << " ";
		}
		cout << endl;

	}

}



int main(){
	map<string, vector<string>> family;
	string surname, chlild_name;
	do{
		cout << "Enter the surname and children(Ctrl+Z to end): " << endl;
		cin >> surname;
		//�ж������surname�Ƿ����
		if(family.find(surname) != family.end()){
			//���ھͰ�childname����vector��
			while(cin >> chlild_name)
			family[surname].push_back(chlild_name);
		}
		else
		{
			//�����ھͽ�����pair�������õ�һ����ʱ��vector����
			vector<string> name_tmp;
			//ͳͳpushback��vector��
			while(cin >> chlild_name){
				name_tmp.push_back(chlild_name);
			}
			family.insert(make_pair(surname, name_tmp));
		}
		//���family
		print_family(family);
		//ʹ��������Ч
		cin.clear();
	}while(cin);

}
