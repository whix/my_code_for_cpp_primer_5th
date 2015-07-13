#include "message.h"
#include "folder.h"
#include <memory>
#include <algorithm>
using namespace std;


Message::Message(const Message &msg):
	contents(msg.contents), folders(msg.folders)
{
	add_to_Folders(msg);
}

Message& Message::operator=(const Message &msg) 
{
	remove_from_Folders();
	contents = msg.contents;
	folders = msg.folders;
	add_to_Folders(msg);
	return *this;
}

void Message::save(Folder &fd)
{
	folders.insert(&fd);
	fd.addMsg(this);
}

void Message::remove(Folder &fd)
{
	folders.erase(&fd);
	fd.remMsg(this);
}

void Message::add_to_Folders(const Message &msg)
{
	for (auto f : msg.folders)
	{
		f->addMsg(this);
	}
}

void Message::remove_from_Folders()
{
	for (auto f : folders)
	{
		f->remMsg(this);
	}
}

void Message::swap(Message &lhs, Message &rhs)
{
	using std::swap;
	for (auto l : lhs.folders)
	{
		l->remMsg(&lhs);
	}
	for (auto r : rhs.folders)
	{
		r->remMsg(&rhs);
	}
	swap(lhs.contents, rhs.contents);
	swap(lhs.folders, rhs.folders);
	for (auto l : lhs.folders)
	{
		l->addMsg(&lhs);
	}
	for (auto r : rhs.folders)
	{
		r->addMsg(&rhs);
	}
}

Message::~Message()
{
	remove_from_Folders();

}
