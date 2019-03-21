#include "TileRenderer.h"
#include "Tile.h"
#include <iostream>

TileRenderer::TileRenderer()
{
}

//Renders all tiles in a multidimensional tile vector. Renders 1 type of tile at a time so the GPU doesn't have to switch textures often
void TileRenderer::renderTileMap(TileManager* tileManager, sf::RenderWindow* window)
{
	sf::Sprite s = tileManager->tileSprites[grass];

	for (size_t i = 0; i < tileManager->tileMap.capacity(); i++)
	{
		for (size_t j = 0; j < tileManager->tileMap[0].capacity(); j++)
		{
			for (size_t k = 0; k < TileTypes::count; k++)
			{
				if (s.getTexture())
				{
					s.setTexture(tileManager->tileTextures[k]);
				}

				if (tileManager->tileMap[i][j].getTileType() == k)
				{
					s.setPosition(i * 32, j * 32);

					window->draw(s);
				}
			}
		}
	}
}

TileRenderer::~TileRenderer()
{
}
