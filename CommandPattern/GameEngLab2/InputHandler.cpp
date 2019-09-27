#include "InputHandler.h"

void InputHandler::handleInput()
{
	sf::Event event;
	if (sf::Event::KeyPressed == event.type) //user pressed a key
	{
		if (sf::Keyboard::Q == event.key.code)
		{
			qKey->execute();
		}		
		else if (sf::Keyboard::W == event.key.code)
		{
			wKey->execute();
		}
		else if (sf::Keyboard::E == event.key.code)
		{
			eKey->execute();
		}
		else if (sf::Keyboard::R == event.key.code)
		{
			rKey->execute();
		}
		else if (sf::Keyboard::T == event.key.code)
		{
			tKey->execute();
		}
		else if (sf::Keyboard::Y == event.key.code)
		{
			yKey->execute();
		}
	}

}
