//̽��vs2012��̻����£�vector��������������/
#include <iostream>
#include <vector>
using namespace std;

int main(){
	vector<int> tmp;
	for (int i = 0; i < 100; i++)
	{
		tmp.push_back(i);
		cout << i + 1 << ": " << tmp.capacity() << "    ";
	}
	system("pause");
}
