#include "Map.hpp"
#include "TextureManager.hpp"


Map::Map()
{
    dirt = TextureManager::LoadTexture("assets/dirt.png");
    grass = TextureManager::LoadTexture("assets/grass.png");
}

void Map::LoadMap()
{}

void Map::DrawMap()
{}