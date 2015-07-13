#ifndef FOLDER_H
#define FOLDER_H
#include "message.h"
#include <string>
#include <set>
using namespace std;


class Folder
{
public:
	Folder();
	Folder(const Folder &);
	Folder& operator=(const Folder &);
	void remMsg(Message *);
	void addMsg(Message *);
	~Folder();

private:
	set<Message*> messages;
};



#endif // !FOLDER_H



