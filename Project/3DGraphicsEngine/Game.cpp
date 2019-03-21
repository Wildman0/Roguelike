#include "Game.h"

#include <iostream>

//Constructor
Game::Game()
	:window(sf::VideoMode(1280, 720, 32), "Fields Without War")
{
	start();
}

//Destructor
Game::~Game()
{

}

//Runs at start
void Game::start()
{
	sfmlTest();
}

//SFML sample code
void Game::sfmlTest()
{
	sf::CircleShape shape(100.f);
	shape.setFillColor(sf::Color::Green);

	while(window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (sf::Event::KeyPressed)
			{
				if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))
				{
					window.close();
				}
			}

			if (event.type == sf::Event::Closed)
				window.close();
		}

		window.clear();

		//Code that renders things

		window.display();
	}
}