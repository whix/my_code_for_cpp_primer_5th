//����list�е�string��Ȼ���õ�������� ��9_18���������� 20141129 wan

#include <iostream>
#include <list>
#include <vector>
#include <string>
using namespace std;

int main(){
	cout << "enter strings(Ctrl + Z to end): " << endl;
	list<string> lis;
	string temp;
	while (cin >> temp)
	{
		lis.push_back(temp);
	}
	for (auto it = lis.cbegin(); it != lis.cend() ; ++it)
	{
		cout << *it << " ";
	}
	cout << endl;

	system("pause");
}
