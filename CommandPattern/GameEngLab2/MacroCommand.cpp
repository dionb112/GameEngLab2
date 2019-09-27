#include "MacroCommand.h"
#include <list>

void MacroCommand::add(Command*)
{
	commands->append(c);
}

void MacroCommand::remove(Command*)
{
	commands->remove(c);
}

void MacroCommand::execute()
{
	std::list<Command*>::iterator iter(commands);
	for (iter.begin(); i.hasRemaining(); i.next())
	{
		Command* c = iter.currentItem();
		c->execute;
	}
}
