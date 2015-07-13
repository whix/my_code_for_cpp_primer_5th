// 利用？：条件符对成绩进行分组，20141110 wan
#include<iostream>
#include<string>
#include<vector>

using std::cout;using std::cin;using std::endl;using std::string;using std::vector;

int main()
{
	int grade;
	string gradelevel;
	cout << "Enter your grade:" << endl;
	while (cin >> grade)
	{
		gradelevel = (grade >= 90) ? "high pass" : (grade >= 75) ? "pass" 
												: (grade >= 60) ? "low pass" : "fail";
		cout << "Your final exam: " << gradelevel << endl;
	}
	system("pause");
	return 0;
}
