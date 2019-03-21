#pragma once

#include <vector>
#include <SFML/Graphics.hpp>
#include "Tile.h"
#include "TileManager.h"

class TileRenderer
{
public:
	TileRenderer();
	~TileRenderer();

	void renderTileMap(TileManager* tileManager, sf::RenderWindow* window);
};

