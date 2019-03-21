#pragma once
#include "TileType.h"
#include <SFML/Graphics/Texture.hpp>

class Tile
{
public:
	Tile();
	Tile(TileType t);
	~Tile();

	void setTileType(TileType t) { tileType = t; }
	TileType getTileType() { return tileType; }

private:
	TileType tileType;
};

