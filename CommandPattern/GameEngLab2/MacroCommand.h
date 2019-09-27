#pragma once
#include "CommandInterface.h"
#include "InputHandler.h"
#include <list>
class MacroCommand : public Command
{
	MacroCommand();
	virtual ~MacroCommand();
	virtual void add(Command*);
	virtual void remove(Command*);
	virtual void execute();
private:
	std::list<Command*>* commands;
};