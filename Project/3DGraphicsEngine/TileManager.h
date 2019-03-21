#pragma once

#include "TileType.h"
#include "Tile.h"
#include <vector>
#include <SFML/Graphics/Texture.hpp>
#include <SFML/Graphics/Sprite.hpp>

class TileManager
{
public:
	TileManager();
	TileManager(int mapSizeX, int mapSizeY);
	~TileManager();

	std::vector<std::vector<Tile>> tileMap;
	std::vector<sf::Texture> tileTextures;
	std::vector<sf::Sprite> tileSprites;

private:
	void start();
	void setTileTextures();

	sf::Uint8 mapSizeX;
	sf::Uint8 mapSizeY;
};
