#include "folder.h"
#include "message.h"

Folder::Folder()
{
}

Folder::Folder(const Folder &f)
{
	messages = f.messages;
	for (auto m : messages)
	{
		m->folders.insert(&*this);
	}
}

Folder&
Folder::operator=(const Folder &fd)
{
	messages = fd.messages;
	for (auto m : messages)
	{
		m->folders.insert(this);
	}
	return *this;
}

void Folder::remMsg(Message *msg)
{
	messages.erase(msg);

}

void Folder::addMsg(Message *msg)
{
	messages.insert(msg);
}

Folder::~Folder()
{
}
