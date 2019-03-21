#include "Game.h"

#include <iostream>

#include "Behaviour.h"
#include "BehaviourBaseTest.h"
#include "CurrentGame.h"
#include "CharacterRenderer.h"

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
	//CurrentGame::game = this;
	createRenderers();
	sfmlTest();
}

//Creates all render objects and adds them to the Behaviour Handler
void Game::createRenderers()
{
	Behaviour::behaviourHandler->addBehaviour(new CharacterRenderer(new CharacterManager));
}

//SFML sample code
void Game::sfmlTest()
{
	sf::CircleShape shape(100.f);
	shape.setFillColor(sf::Color::Green);

	tileManager = TileManager(50, 50);

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

		for (size_t i = 0; i < Behaviour::behaviourHandler->getBehaviours().capacity(); i++)
		{
			Behaviour::behaviourHandler->getBehaviours()[i]->onUpdate();
		}

		for (size_t i = 0; i < Behaviour::behaviourHandler->getBehaviours().capacity(); i++)
		{
			Behaviour::behaviourHandler->getBehaviours()[i]->onRender();
		}

		window.clear();

		tileRenderer.renderTileMap(&tileManager, &window);

		window.display();
	}
}