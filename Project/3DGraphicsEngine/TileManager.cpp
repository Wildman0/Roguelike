#include "TileManager.h"
#include <iostream>

//Default constructor
TileManager::TileManager()
{
	
}

//Constructor
TileManager::TileManager(int mapSizeX, int mapSizeY)
{
	this->mapSizeX = mapSizeX;
	this->mapSizeY = mapSizeY;

	start();
}

//Runs after construction
void TileManager::start()
{
	tileMap.resize(mapSizeX);

	for (size_t i = 0; i < mapSizeX; i++)
	{
		tileMap[i].resize(mapSizeY);
	}

	Tile t = Tile();

	for (size_t i = 0; i < mapSizeX; i++)
	{
		for (size_t j = 0; j < mapSizeY; j++)
		{
			tileMap[i][j] = t;
			t.setTileType(grass);
		}
	}
	
	//tileMap[0][0] isn't set properly by the loop above so it's set manually here
	tileMap[0][0] = t;

	setTileTextures();
}

void TileManager::setTileTextures()
{
	tileTextures.resize(TileTypes::count);
	tileSprites.resize(TileTypes::count);

	tileTextures[grass] = sf::Texture();
	tileSprites[grass] = sf::Sprite();

	if (!tileTextures[grass].loadFromFile(std::string(__argv[0]) + "/../Images/grass.png"))
	{
		std::cout << "Texture loading failed" << std::endl;
	}
	
	tileSprites[grass].setTexture(tileTextures[grass]);
}

TileManager::~TileManager()
{
}