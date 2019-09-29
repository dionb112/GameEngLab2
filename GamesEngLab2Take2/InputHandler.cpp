#include "InputHandler.h"

void InputHandler::handleInput(sf::Event t_event)
{
	if (sf::Keyboard::Q == t_event.key.code)
	{
		qKey->execute();
	}
	else if (sf::Keyboard::W == t_event.key.code)
	{
		wKey->execute();
	}
	else if (sf::Keyboard::E == t_event.key.code)
	{
		eKey->execute();
	}
	else if (sf::Keyboard::R == t_event.key.code)
	{
		rKey->execute();
	}
	else if (sf::Keyboard::T == t_event.key.code)
	{
		tKey->execute();
	}
	else if (sf::Keyboard::Y == t_event.key.code)
	{
		yKey->execute();
	}
}

