//���õ�������һ�������еĵ�n�����͵�����n������Ӻ������ 20141108 wan

#include<iostream>
#include<string>
#include<vector>

using std::cin; using std::cout; using std::endl; using std::string;using std::vector;

int main()
{
	vector<int> vec_num;
	int num;
	//��ȡ���ݣ�����
	cout << "Enter the num(Ctrl+Z to end): " << endl;
	while(cin >> num)
		vec_num.push_back(num);
	//û�������������Ϣ
	if(vec_num.size() == 0){
		cout << "No element?!" << endl;
		return -1;
	}

	cout << "Sum of pair of counterpart elements in the vector: "
		 << endl;

	//ÿ�������Ӻ�ǰ����������м���һλ
	for (vector<int>::iterator first = vec_num.begin(),
							   last = vec_num.end() - 1;
							   first <= last;
							   ++first, --last){
		if(first == last)
			cout << endl
				 << "The center element is not been summed "
				 << "and its value is "
				 << *first
				 << endl;
		else
			cout << *first + *last << "\t";
	}

	system("pause");
	return 0;
}