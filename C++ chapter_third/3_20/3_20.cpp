//����һ���������������Ǵ���һ��vector���󣬽���β�������������ڶ��͵����ڶ����������� 20141107  
#include<iostream>
#include<string>
#include<cctype>
#include<vector>

using std::cin; using std::cout; using std::endl; using std::string;using std::vector;

int main()
{
	int num;
	vector<int> vec_num;
	cout << "Enter the num (Ctrl+Z to end):" << endl;

	while(cin >> num)										//�������ݣ�Ctrl+Z ��������
		vec_num.push_back(num);

	vector<int>::size_type total = vec_num.size();
	for (vector<int>::size_type i = 0; i < total / 2; i++)	//��vec_num�������д���
	{
		int sum;
		sum = vec_num[i] + vec_num[total - i - 1];
		cout << "the sum of rank " << i + 1 << " and " << total - i << " is: " << sum <<endl;
	}

	system("pause");
	return 0;

}