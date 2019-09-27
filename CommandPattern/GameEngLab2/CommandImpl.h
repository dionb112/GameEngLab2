#pragma once
#include "CommandInterface.h"
class QCommand : public Command
{
public:
	virtual void execute() { q(); }
};
class WCommand : public Command
{
public:
	virtual void execute() { w(); }
};
class ECommand : public Command
{
public:
	virtual void execute() { e(); }
};
class RCommand : public Command
{
public:
	virtual void execute() { r(); }
};
class TCommand : public Command
{
public:
	virtual void execute() { t(); }
};
class YCommand : public Command
{
public:
	virtual void execute() { y(); }
};