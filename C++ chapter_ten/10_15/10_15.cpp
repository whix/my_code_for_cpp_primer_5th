//如何从函数接受参数？？  20141202 wan

#include <iostream>
using namespace std;

int plus(int a, int b){
	int atmp = a;
	int sum = [ atmp ](int b)-> int{ return atmp + b;};
	return sum;
}
