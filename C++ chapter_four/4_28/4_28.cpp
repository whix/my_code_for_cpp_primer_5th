//内置类型所在空间大小 20141110 wan

#include<iostream>
#include<string>
#include<vector>

using std::cout;using std::cin;using std::endl;using std::string;using std::vector;

int main()
{
	int *p;
	cout << "int: " << sizeof(int) << endl;
	cout << "float: " << sizeof(float) << endl;
	cout << "char: " << sizeof(char) << endl;
	cout << "double: " << sizeof(double) << endl;
	cout << "long long int: " << sizeof(long long int) << endl;
	cout << "unsigned char: " << sizeof(unsigned char) << endl;
	cout << "unsigned int: " << sizeof(unsigned int) << endl;
	cout << "int*: " << sizeof(p) << endl;

	system("pause");
	return 0;
}
