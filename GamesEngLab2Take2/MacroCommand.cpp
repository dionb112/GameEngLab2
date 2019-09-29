#pragma once
#include "MacroCommand.h"

void MacroCommand::add(Command* c)
{
	 commands->push_back(c);
}

void MacroCommand::remove(Command* c)
{
	 commands->remove(c);
}

void MacroCommand::execute()
{	
	std::list<Command*>::iterator iter;
	for (iter = commands->begin(); iter != commands->end(); iter++)
	{
		Command* c = commands->front();
		commands->pop_front();
		c->execute();
	}
}
