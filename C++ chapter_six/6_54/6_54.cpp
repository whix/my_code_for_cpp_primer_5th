//��д���������������������int�ββ��ҷ�������Ҳ��int��Ȼ������һ��vector��������Ԫ��Ϊָ������ָ�� 20141112 wan
#include<iostream>
#include<string>
#include<vector>
using std::cin;using std::cout;using std::endl;using std::string;using std::vector;

int plusf(int x, int y){					//��������������
	return x + y;
}
int minus(int x, int y){
	return x - y;
}
int times(int x, int y){
	return x * y;
}
int division(int x, int y){
	return x / y;
}
				
int main()
{
	int (*p1)(int, int) = plusf;			//����ָ�������
	int (*p2)(int, int) = minus;
	int (*p3)(int, int) = times;
	int (*p4)(int, int) = division;
	vector<decltype(p1)> pfun;				//�Ժ���ָ��ΪԪ�ص�vector
	pfun.push_back(p1);						//��ʼ��vector
	pfun.push_back(p2);
	pfun.push_back(p3);
	pfun.push_back(p4);
	for(auto p : pfun){
		cout << (*p)(10,3) << endl;			//���ú���ָ����ú��������
	}

	system("pause");

}
