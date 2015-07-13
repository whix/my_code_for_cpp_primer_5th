//20141129 wan
#include <iostream>
#include <list>
#include <deque>
using namespace std;

int main(){
	list<int> lis;
	deque<int> odd, even;
	for (int i = 0; i < 100; i++)
	{
		lis.push_back(i);
	}
	for(auto l : lis){
		if(l % 2 == 0)
			even.push_back(l);
		else odd.push_back(l);
	}

	int cnt1 = 0, cnt2 = 0;
	cout << "the even nums:" << endl;
	for(auto d : even){
		cout << d << "\t";
		if(++cnt1 == 6){
			cout << endl;
			cnt1 = 0;
		}	
	}
	cout << endl;
	cout << "the odd nums:" << endl;
	for(auto d : odd){
		cout << d << "\t";
		if(++cnt2 == 6){
			cout << endl;
			cnt2 = 0;
		}	
	}
	cout << endl;

	system("pause");
	return 0;

}
