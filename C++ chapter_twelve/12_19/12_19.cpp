//在12.19的基础上作12.20题					20141209	wan
//逐行读入一个输入文件，将内容存入myStrBlob，用一个myStrBlobPtr打印出每个元素
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
