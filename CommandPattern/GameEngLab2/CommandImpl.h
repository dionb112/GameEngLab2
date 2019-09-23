#pragma once
#include "CommandInterface.h"
class QWERTYCommand : public Command
{
public:
	virtual void execute() { qwerty(); }
};