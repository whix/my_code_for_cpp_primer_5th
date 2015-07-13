//wan版本的单词转换，感觉比较粗糙~加油!  20141206  wan 
#include <iostream>
#include <sstream>
#include <string>
#include <fstream>
#include <map>
using namespace std;

map<string, string> build_map(ifstream &map_file){
	map<string, string> tmp;
	string line, key, sentence;
	while(map_file >> key && getline(map_file, sentence) && sentence.size() > 0){
//		sentence = sentence.substr(1);
		tmp.insert(make_pair(key, sentence.substr(1)));
	}
	return tmp;
}

void word_transform(ifstream &map_file, ifstream &input){

	auto transform_rule = build_map(map_file);
	string input_line;
	while(getline(input, input_line)){
		istringstream line_stream(input_line);
		string word;
		while(line_stream >> word){
			auto iter = transform_rule.find(word);
			if(iter == transform_rule.end()){
				cout << word << " "; 
			}
			else cout << iter->second << " ";

		}
		cout << endl;

	}


}



int main(){
	ifstream m("map_file"), in("input");
	word_transform(m, in);
	system("pause");
}


