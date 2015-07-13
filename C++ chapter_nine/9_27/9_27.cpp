//forward_listµÄÌí¼Ó/É¾³ı²Ù×÷¡£ 20141130  wan
#include <iostream>	
#include <forward_list>
using namespace std;

int main(){
	forward_list<int> flis;
	auto it = flis.before_begin();
	for (int i = 0; i < 10; i++)
	{
		it = flis.emplace_after(it, i);
	}
	auto prev = flis.before_begin(),
		 curr = flis.begin();
	while(curr != flis.end()){
		if(*curr % 2 == 1){
			curr = flis.erase_after(prev);
		}
		else{
			prev = curr;
			++curr;
		}
	}

	for(auto f : flis){
		cout << f << endl;
	}

	system("pause");
	return 0;
}
