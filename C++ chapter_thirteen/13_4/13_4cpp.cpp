//ʲôʱ����ÿ������캯��  20141214		wan
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

Point foo_bar(Point arg)				//1��
{
	cout << "mark 1." << endl;
	Point local = arg, *heap = new Point(global);	//2��3��
	cout << "mark 2." << endl;
	*heap = local;					//���ǳ�ʼ�������Ǹ�ֵ���ʲ����ø��ƹ��캯����
	cout << "mark 3." << endl;
	Point pa[4] = { local, *heap };		//4��5��
	cout << "mark 4." << endl;
	return *heap;					//6��
}

int main()
{
	Point tmp;
	foo_bar(tmp);
	system("pause");
	
}