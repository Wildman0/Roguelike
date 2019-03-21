#pragma once

#include <SFML/Main.hpp>
#include <SFML/Graphics.hpp>

class Game
{
public:
	Game();
	~Game();

	void start();

	sf::RenderWindow window;

private:
	void createRenderers();
	void sfmlTest();
};