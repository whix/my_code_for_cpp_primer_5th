//��12.19�Ļ�������12.20��					20141209	wan
//���ж���һ�������ļ��������ݴ���myStrBlob����һ��myStrBlobPtr��ӡ��ÿ��Ԫ��
#include "mystrblob.h"
#include "mystrblobptr.h"
#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main()
{
	MyStrBlob vStr;
	MyStrBlobPtr vStrPtr(vStr);
	string line;
	ifstream inStream("eassy.txt");
	while (getline(inStream, line))
	{
		vStr.push_back(line);
		cout << vStrPtr.deref() << endl;
		vStrPtr.incr();
	}
	system("pause");
	return 0;
}
