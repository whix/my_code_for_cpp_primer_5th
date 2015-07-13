//编写函数声明，令其接受两个int形参并且返回类型也是int；然后声明一个vector对象，令其元素为指向函数的指针 20141112 wan
#include<iostream>
#include<string>
#include<vector>
using std::cin;using std::cout;using std::endl;using std::string;using std::vector;

int plusf(int x, int y){					//各个函数的声明
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
	int (*p1)(int, int) = plusf;			//函数指针的声明
	int (*p2)(int, int) = minus;
	int (*p3)(int, int) = times;
	int (*p4)(int, int) = division;
	vector<decltype(p1)> pfun;				//以函数指针为元素的vector
	pfun.push_back(p1);						//初始化vector
	pfun.push_back(p2);
	pfun.push_back(p3);
	pfun.push_back(p4);
	for(auto p : pfun){
		cout << (*p)(10,3) << endl;			//利用函数指针调用函数并输出
	}

	system("pause");

}
