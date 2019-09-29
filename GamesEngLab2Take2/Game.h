/// <summary>
/// @author Dion Buckley
/// @date Sep 2019
///
/// </summary>
#ifndef GAME_HPP
#define GAME_HPP
#include <SFML/Graphics.hpp>
#include "InputHandler.h"
class Game
{
public:
	Game();
	void run();
private:
	InputHandler m_inputHandler;
	const sf::Uint8 FORTY_TWO = 4.2f;
	const unsigned int SCR_W = 1280;
	const unsigned int SCR_H = 500;
	sf::RenderWindow m_window; // main SFML window
	sf::Font m_ArialBlackfont; // font used by message
	sf::Text m_welcomeMessage; // text used for message on screen
	bool m_exitGame; // control exiting game
	void processEvents();
	void processKeys(sf::Event t_event);
	void update(float t_deltaTime);
	void render();
	void setupFontAndText();
};
#endif // !GAME_HPP
