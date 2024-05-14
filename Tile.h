#include <SFML/Graphics.hpp>
#include <string.h>
#include <math.h>
#include <iostream>
#ifndef TILE_H
#define TILE_H

using namespace sf;

class Tile{
    private:
    
    public:
        bool isGrass;
        bool isInventory;
        bool isMarket;
        bool isVeg;
        bool isSoil;
        bool isHarvestable;
        bool isMouseOverTile;
        Vector2f position;
        Texture texture;
        Sprite sprite;
      
        

        Tile(std::string imageName, float xpos, float ypos, bool isGrass, bool isInventory, bool isMarket, bool isVeg, bool isSoil, bool isHarvestable);

        bool spawnSprite(std::string);

       
};


#endif