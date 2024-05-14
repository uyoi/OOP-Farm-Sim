#include <SFML/Graphics.hpp>
#include "Tile.h"
#include <vector>
using namespace sf;
using namespace std;

#ifndef MARKET_H
#define MARKET_H
class Market{
    public:
        int goldHoeCost;
        int hoeCost;
        int fertCost
        int carrotSeedCost = 10;
        int onionSeedCost = 20;
        int tomatoSeedCost = 30;
        int money = 0;
        std::vector<std::vector<Tile*>> marketTile;

    Market(){};



}

#endif