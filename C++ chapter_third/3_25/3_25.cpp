//����iteratorʵ�ֳɼ��ֶγ��� 20141108 wan
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
		(*(it + grade/10))++;						//�Ǹ������εķ����ͼ�һ��++ ���ȼ�����*
	}
	cout << "The num of each score level: " <<endl;
	for(auto c : scores){
		cout << c << "  ";
	}
	cout << endl;

	system("pause");
	return 0;
}