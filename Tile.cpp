#include <SFML/Graphics.hpp>
#include "Tile.h"
#include <string>
#include <math.h>
#include <iostream>
using namespace sf;
using namespace std;

        Tile::Tile(std::string imageName, float xpos, float ypos, bool isGrass, bool isInventory, bool isMarket, bool isVeg, bool isSoil, bool isHarvestable){
            if(!spawnSprite(imageName)){
                return;
            }

            position = Vector2f(xpos,ypos);
            sprite.setPosition(position);  
                    
        } //default constructor
    
        bool Tile::spawnSprite(std::string imageName){

            if(!texture.loadFromFile(imageName)){ //loads the texture from a file
                return false;
            }
            texture.setSmooth(true);
            sprite.setTexture(texture);
            sprite.setTextureRect(IntRect(0,0,100,100));
            return true; 
        
            
        }

       


