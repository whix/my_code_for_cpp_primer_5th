//比较字符串的长度和大小， 20141106

#include<iostream>
#include<string>

using std::cin; using std::cout; using std::endl; using std::string;

int main()
{
	string s1, s2;
	cout << "Enter two strings :" << endl;
	cin >> s1 >> s2;
	if(s1 == s2)
		cout << s1 << ", " << s2 << " are same string." << endl;
	else if(s1 > s2) 
		cout << "the bigger string is " << s1 << endl;
	else 
		cout << "the bigger string is " << s2 << endl;
	if (s1.size() != s2.size())
	{
		if(s1.size() > s2.size())
			cout << "the longger string is " << s1 << endl;
		else 
			cout << "the longger string is " << s2 << endl;
	}

	system("pause");
	return 0;
}