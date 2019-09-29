#pragma once
#include "CommandInterface.h"
class QCommand : public Command
{
public:
	virtual void execute() {  q(); }
private:
	void q() {}
};
class WCommand : public Command
{
public:
	virtual void execute() { w(); }
private:
	void w() {}
};
class ECommand : public Command
{
public:
	virtual void execute() { e(); }
private:
	void e() {}
};
class RCommand : public Command
{
public:
	virtual void execute() { r(); }
private:
	void r() {}
};
class TCommand : public Command
{
public:
	virtual void execute() { t(); }
private:
	void t() {}
};
class YCommand : public Command
{
public:
	virtual void execute() {  y(); }
private:
	void y() {}
};
