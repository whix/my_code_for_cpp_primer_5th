//什么时候调用拷贝构造函数  20141214		wan
#include <iostream>
#include <string>
using namespace std;

class Point
{
public:
	Point();
	Point(const Point &p)
	{
		cout << "call copy constructor." << endl;
	}
	~Point();

private:


};

Point::Point()
{
}

Point::~Point()
{
}

Point global;

Point foo_bar(Point arg)				//1次
{
	cout << "mark 1." << endl;
	Point local = arg, *heap = new Point(global);	//2、3次
	cout << "mark 2." << endl;
	*heap = local;					//不是初始化，而是赋值，故不调用复制构造函数。
	cout << "mark 3." << endl;
	Point pa[4] = { local, *heap };		//4、5次
	cout << "mark 4." << endl;
	return *heap;					//6次
}

int main()
{
	Point tmp;
	foo_bar(tmp);
	system("pause");
	
}