#include <SFML/Graphics.hpp>
#include "Tile.h"
#include <vector>
using namespace sf;
using namespace std;
#ifndef WORLD_H
#define WORLD_H

class World{
    protected:
    Vector2i marketPos;
    std::vector<Vector2i> inventoryPos;
    std::vector<Vector2i> soilPos;
    std::vector<Vector2i> fertSoilPos;
    std::vector<Vector2i> halfGrownPos;
    std::vector<Vector2i> HarvestablePos;
    
    public:

   
    void setUpTiles();
    void spawnMarket();
   
    void setMap();

    bool hoeselected();
    
    //tile grid is a vector of vectors
    std::vector<std::vector<Tile*>> tile;
    std::vector<std::vector<Tile*>> marketTile;
    
    int mapLength = 10;
    int groundStates[9][10];
    int boughtLand[9][10];
    int isFertilised[9][10];
    

    World();

    

};


#endif