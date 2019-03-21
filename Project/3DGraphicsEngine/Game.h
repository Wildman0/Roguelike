#pragma once

#include <SFML/Main.hpp>
#include <SFML/Graphics.hpp>

#include "TileManager.h"

#include "TileRenderer.h"

#include "BehaviourHandler.h"

class Game
{
public:
	Game();
	~Game();

	void start();

	TileManager tileManager;
	TileRenderer tileRenderer;

	sf::RenderWindow window;

private:

	void createRenderers();
	void sfmlTest();
};