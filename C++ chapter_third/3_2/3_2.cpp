//��string��׼���ȡһ�������һ���ʣ�20141106

#include<iostream>
#include<string>
using std::string;
using std::cin;
using std::cout;
using std::endl;

int main()
{
	string line;
	while(cin >> line)				//get one word
		cout << line << endl;
//	while(getline(cin, line))		//��ȡһ������~~
//		cout << line << endl;

	system("pause");

	return 0;
}