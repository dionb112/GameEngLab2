#pragma once
#include "CommandImpl.h"
#include <SFML/Graphics.hpp>
class InputHandler
{
public:
	void handleInput();
private:
	Command* backspace;
	Command* tab;
	Command* qKey;
	Command* wKey;
	Command* eKey;
	Command* rKey;
	Command* tKey;
	Command* yKey;
};