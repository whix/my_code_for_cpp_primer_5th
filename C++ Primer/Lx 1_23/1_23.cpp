//读取文件book_sales数据，存入后输出，and统计每本书的销售记录，然后合并后输出 20141105

#include<fstream>
#include"Sales_item.h"
using namespace std;



int main()
{
//	void book_count(Sales_item book[10]);
	ifstream fin;
	Sales_item book[10];
	fin.open("book_sales");
	for(int i = 0; i < 10; i++){
		fin>>book[i];
	}
	for(int j = 0; j < 10; j++){
		cout<<book[j]<<endl;	
	}
//	book_count(book[10]);
	system("pause");
	return 0;
}
/*
void book_count(Sales_item book[10])
{
	Sales_item curr_item, next_item;
	int record_num = 1;
	for(int i = 0; i < 10; i++){
		int j = i + 1;
		curr_item = book[i];
		next_item = book[j];
		if(book[i].isbn() == book[j].isbn()){
			record_num++;
			i++;
		}
		else{
			cout<<curr_item<<"The record is:"<<record_num<<endl;
		}

	}
}
*/