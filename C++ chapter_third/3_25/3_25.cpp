//利用iterator实现成绩分段程序 20141108 wan
#include<iostream>
#include<string>
#include<vector>

using std::cin; using std::cout; using std::endl; using std::string;using std::vector;

int main()
{
	vector<unsigned> scores(11,0);
	unsigned grade;
	cout << "Enter the grade(Ctrl+Z to end)" << endl;
	auto it = scores.begin();
	while (cin >> grade)
	{
		(*(it + grade/10))++;						//那个分数段的分数就加一，++ 优先级高于*
	}
	cout << "The num of each score level: " <<endl;
	for(auto c : scores){
		cout << c << "  ";
	}
	cout << endl;

	system("pause");
	return 0;
}