//����11.7�ĳ���	20141203  wan

#include <iostream>
#include <vector>
#include <string>
#include <map>

using namespace std;

//����Ӻ�������д��main()���������Ի���
//�����ж�ʹ�ó�ֵ����
void print_family(const map<string, vector<pair<string, string>>> &f){
	//��family�÷�Χfor����ÿ����ͬsurname��������pair
	for(const auto &p : f){
		cout << p.first << " has " << p.second.size()
			 << " children. They are: ";
		//��pair�еĵڶ���ֵʹ�÷�Χfor���������ÿ�����ӵ����ֺ�����
		for(const auto &v : p.second){
			cout << v.first << "(Birthday: " << v.second << ") ";
		}
		cout << endl;

	}

}



int main(){
	map<string, vector<pair<string, string>>> family;
	string surname, chlild_name, child_birth;
	do{
		cout << "Enter the surname and children(Ctrl+Z to end): " << endl;
		cin >> surname;
		//�ж������surname�Ƿ����
		if(family.find(surname) != family.end()){
			//���ھͰ�pair����vector��
			while(cin >> chlild_name >> child_birth)
			family[surname].push_back(make_pair(chlild_name, child_birth));
		}
		else
		{
			//�����ھͽ�����pair�������õ�һ����ʱ��vector����
			vector<pair<string, string>> name_tmp;
			//ͳͳpushback��vector��
			while(cin >> chlild_name >> child_birth){
				name_tmp.push_back(make_pair(chlild_name, child_birth));
			}
			family.insert(make_pair(surname, name_tmp));
		}
		//���family
		print_family(family);
		//ʹ��������Ч
		cin.clear();
	}while(cin);

}
