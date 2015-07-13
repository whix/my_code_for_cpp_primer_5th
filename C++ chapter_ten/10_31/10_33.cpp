//注意流的初始化，和不可拷贝  20141202  wan
#include <iostream>
#include <fstream>
#include <vector>
#include <iterator>
using namespace std;

//流不可拷贝，只能引用~ 
void odd_and_even(ifstream &in, ofstream &out_odd, ofstream &out_even){ 
	istream_iterator<int> in_it(in), eof;
	ostream_iterator<int> out_odd_it(out_odd, " "), out_even_it(out_even, " ");
	while(in_it != eof){
		if(*in_it % 2 ==0)
			*out_even_it = *in_it++;
		else *out_odd_it = *in_it++;

	}

}

int main(){
	ifstream in("nums");
	ofstream out_odd("odd"), out_even("even");
	odd_and_even(in, out_odd, out_even);

}

