//����һ�����á� 20141112 wan

#include<iostream>
#include<string>
#include<vector>
using std::cin;using std::cout;using std::endl;using std::string;using std::vector;

int &get(int *arry, int index){ return arry[index]; }

int main()
{
	int ia[10] = {0};
	for(int i = 0; i != 10; i++){
		get(ia, i) = i;
		cout << get(ia, i) << endl;

	}
	for (int i = 0; i < 10; i++)
	{
		cout << ia[i] << "\t" << endl;
	}

		

	system("pause");
}
