#include <iostream>
#include <vector>
using namespace std;

int main(){
	vector<int> vec1(9, 9),vec2(9,9);
	if (vec1 == vec2)
	{
		cout << "It's equal." << endl;
	}
	else cout << "It's not equal." << endl;

	system("pause");
	
}
