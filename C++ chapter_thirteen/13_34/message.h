#ifndef MESSAGE_H
#define MESSAGE_H
#include <string>
#include <set>
using namespace std;

class Folder;

class Message
{
public:
	friend class Folder;
	Message(const string &s = string());
	Message(const Message &msg);
	Message& operator=(const Message &msg);
	void save(Folder &);
	void remove(Folder &);
	void swap(Message &, Message&);
	~Message();

private:
	string contents;
	set<Folder*> folders;
	void add_to_Folders(const Message&);
	void remove_from_Folders();
};


#endif // !MESSAGE_H


