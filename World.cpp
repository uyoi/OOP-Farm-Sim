#include "World.h"
using namespace sf;
using namespace std;

World::World(){
    mapLength = 10; //sets the length of each tile on the map
    setMap();
    spawnMarket();


}



void World::spawnMarket(){
    marketTile.clear();

    std::vector<Tile*> row1;
    row1.push_back(new Tile("/home/sam/Downloads/MarketBackground.png", 0,0,false,false,false,false,false,false)); 
    row1.push_back(new Tile("/home/sam/Downloads/MarketBackground.png", 100,0,true,false,false,false,false,false));
    row1.push_back(new Tile("/home/sam/Downloads/MarketBackground.png", 200,0,true,false,false,false,false,false));
    row1.push_back(new Tile("/home/sam/Downloads/MarketBackground.png", 300,0,true,false,false,false,false,false));
    row1.push_back(new Tile("/home/sam/Downloads/MarketBackground.png", 400,0,true,false,false,false,false,false));
    row1.push_back(new Tile("/home/sam/Downloads/MarketBackground.png", 500,0,true,false,false,false,false,false));
    row1.push_back(new Tile("/home/sam/Downloads/MarketBackground.png", 600,0,true,false,false,false,false,false));
    row1.push_back(new Tile("/home/sam/Downloads/MarketBackground.png", 700,0,true,false,false,false,false,false));
    row1.push_back(new Tile("/home/sam/Downloads/MarketBackground.png", 800,0,true,false,false,false,false,false));
    row1.push_back(new Tile("/home/sam/Downloads/MarketBackground.png", 900,0,false,false,true,false,false,false));
    marketTile.push_back(row1);

    std::vector<Tile*> row2; //to reference specific tiles, pointer is used
    row2.push_back(new Tile("/home/sam/Downloads/MarketBackground.png", 0,100,true,false,false,false,false,false)); //r1,c1
    row2.push_back(new Tile("/home/sam/Downloads/MarketBackground.png", 100,100,true,false,false,false,false,false));
    row2.push_back(new Tile("/home/sam/Downloads/MarketBackground.png", 200,100,true,false,false,false,false,false));
    row2.push_back(new Tile("/home/sam/Downloads/MarketBackground.png", 300,100,true,false,false,false,false,false));
    row2.push_back(new Tile("/home/sam/Downloads/MarketBackground.png", 400,100,true,false,false,false,false,false));
    row2.push_back(new Tile("/home/sam/Downloads/MarketBackground.png", 500,100,true,false,false,false,false,false));
    row2.push_back(new Tile("/home/sam/Downloads/MarketBackground.png", 600,100,true,false,false,false,false,false));
    row2.push_back(new Tile("/home/sam/Downloads/MarketBackground.png", 700,100,true,false,false,false,false,false));
    row2.push_back(new Tile("/home/sam/Downloads/MarketBackground.png", 800,100,true,false,false,false,false,false));
    row2.push_back(new Tile("/home/sam/Downloads/MarketBackground.png", 900,100,true,false,false,false,false,false));
    marketTile.push_back(row2);

    std::vector<Tile*> row3; //to reference specific tiles, pointer is used
    row3.push_back(new Tile("/home/sam/Downloads/MarketBackground.png", 0,200,true,false,false,false,false,false)); //r1,c1
    row3.push_back(new Tile("/home/sam/Downloads/MarketHoe.png", 100,200,true,false,false,false,false,false));
    row3.push_back(new Tile("/home/sam/Downloads/MarketBackground.png", 200,200,true,false,false,false,false,false));
    row3.push_back(new Tile("/home/sam/Downloads/MarketBackground.png", 300,200,true,false,false,false,false,false));
    row3.push_back(new Tile("/home/sam/Downloads/MarketBackground.png", 400,200,true,false,false,false,false,false));
    row3.push_back(new Tile("/home/sam/Downloads/MarketBackground.png", 500,200,true,false,false,false,false,false));
    row3.push_back(new Tile("/home/sam/Downloads/MarketBackground.png", 600,200,true,false,false,false,false,false));
    row3.push_back(new Tile("/home/sam/Downloads/MarketBackground.png", 700,200,true,false,false,false,false,false));
    row3.push_back(new Tile("/home/sam/Downloads/MarketBackground.png", 800,200,true,false,false,false,false,false));
    row3.push_back(new Tile("/home/sam/Downloads/MarketBackground.png", 900,200,true,false,false,false,false,false));
    marketTile.push_back(row3);

    std::vector<Tile*> row4; //to reference specific tiles, pointer is used
    row4.push_back(new Tile("/home/sam/Downloads/MarketBackground.png", 0,300,true,false,false,false,false,false)); //r1,c1
    row4.push_back(new Tile("/home/sam/Downloads/MarketBackground.png", 100,300,true,false,false,false,false,false));
    row4.push_back(new Tile("/home/sam/Downloads/MarketBackground.png", 200,300,true,false,false,false,false,false));
    row4.push_back(new Tile("/home/sam/Downloads/MarketBackground.png", 300,300,true,false,false,false,false,false));
    row4.push_back(new Tile("/home/sam/Downloads/MarketBackground.png", 400,300,true,false,false,false,false,false));
    row4.push_back(new Tile("/home/sam/Downloads/MarketBackground.png", 500,300,true,false,false,false,false,false));
    row4.push_back(new Tile("/home/sam/Downloads/MarketBackground.png", 600,300,true,false,false,false,false,false));
    row4.push_back(new Tile("/home/sam/Downloads/MarketBackground.png", 700,300,true,false,false,false,false,false));
    row4.push_back(new Tile("/home/sam/Downloads/MarketBackground.png", 800,300,true,false,false,false,false,false));
    row4.push_back(new Tile("/home/sam/Downloads/MarketBackground.png", 900,300,true,false,false,false,false,false));
    marketTile.push_back(row4);

    std::vector<Tile*> row5; //to reference specific tiles, pointer is used
    row5.push_back(new Tile("/home/sam/Downloads/MarketBackground.png", 0,400,true,false,false,false,false,false)); //r1,c1
    row5.push_back(new Tile("/home/sam/Downloads/MarketOnionSeed.png", 100,400,true,false,false,false,false,false));
    row5.push_back(new Tile("/home/sam/Downloads/MarketBackground.png", 200,400,true,false,false,false,false,false));
    row5.push_back(new Tile("/home/sam/Downloads/MarketCarrotSeed.png", 300,400,true,false,false,false,false,false));
    row5.push_back(new Tile("/home/sam/Downloads/MarketBackground.png", 400,400,true,false,false,false,false,false));
    row5.push_back(new Tile("/home/sam/Downloads/MarketTomatoSeed.png", 500,400,true,false,false,false,false,false));
    row5.push_back(new Tile("/home/sam/Downloads/MarketBackground.png", 600,400,true,false,false,false,false,false));
    row5.push_back(new Tile("/home/sam/Downloads/MarketFert.png", 700,400,true,false,false,false,false,false));
    row5.push_back(new Tile("/home/sam/Downloads/MarketBackground.png", 800,400,true,false,false,false,false,false));
    row5.push_back(new Tile("/home/sam/Downloads/MarketBackground.png", 900,400,true,false,false,false,false,false));
    marketTile.push_back(row5);

    std::vector<Tile*> row6; //to reference specific tiles, pointer is used
    row6.push_back(new Tile("/home/sam/Downloads/MarketBackground.png", 0,500,true,false,false,false,false,false)); //r1,c1
    row6.push_back(new Tile("/home/sam/Downloads/MarketBackground.png", 100,500,true,false,false,false,false,false));
    row6.push_back(new Tile("/home/sam/Downloads/MarketBackground.png", 200,500,true,false,false,false,false,false));
    row6.push_back(new Tile("/home/sam/Downloads/MarketBackground.png", 300,500,true,false,false,false,false,false));
    row6.push_back(new Tile("/home/sam/Downloads/MarketBackground.png", 400,500,true,false,false,false,false,false));
    row6.push_back(new Tile("/home/sam/Downloads/MarketBackground.png", 500,500,true,false,false,false,false,false));
    row6.push_back(new Tile("/home/sam/Downloads/MarketBackground.png", 600,500,true,false,false,false,false,false));
    row6.push_back(new Tile("/home/sam/Downloads/MarketBackground.png", 700,500,true,false,false,false,false,false));
    row6.push_back(new Tile("/home/sam/Downloads/MarketBackground.png", 800,500,true,false,false,false,false,false));
    row6.push_back(new Tile("/home/sam/Downloads/MarketBackground.png", 900,500,true,false,false,false,false,false));
    marketTile.push_back(row6);

    std::vector<Tile*> row7; //to reference specific tiles, pointer is used
    row7.push_back(new Tile("/home/sam/Downloads/MarketBackground.png", 0,600,true,false,false,false,false,false)); //r1,c1
    row7.push_back(new Tile("/home/sam/Downloads/Money.png", 100,600,true,false,false,false,false,false));
    row7.push_back(new Tile("/home/sam/Downloads/MarketBackground.png", 200,600,true,false,false,false,false,false));
    row7.push_back(new Tile("/home/sam/Downloads/MarketBackground.png", 300,600,true,false,false,false,false,false));
    row7.push_back(new Tile("/home/sam/Downloads/MarketBackground.png", 400,600,true,false,false,false,false,false));
    row7.push_back(new Tile("/home/sam/Downloads/MarketBackground.png", 500,600,true,false,false,false,false,false));
    row7.push_back(new Tile("/home/sam/Downloads/MarketBackground.png", 600,600,true,false,false,false,false,false));
    row7.push_back(new Tile("/home/sam/Downloads/MarketBackground.png", 700,600,true,false,false,false,false,false));
    row7.push_back(new Tile("/home/sam/Downloads/MarketBackground.png", 800,600,true,false,false,false,false,false));
    row7.push_back(new Tile("/home/sam/Downloads/MarketBackground.png", 900,600,true,false,false,false,false,false));
    marketTile.push_back(row7);

    std::vector<Tile*> row8; //to reference specific tiles, pointer is used
    row8.push_back(new Tile("/home/sam/Downloads/MarketBackground.png", 0,700,true,false,false,false,false,false)); //r1,c1
    row8.push_back(new Tile("/home/sam/Downloads/MarketBackground.png", 100,700,true,false,false,false,false,false));
    row8.push_back(new Tile("/home/sam/Downloads/MarketBackground.png", 200,700,true,false,false,false,false,false));
    row8.push_back(new Tile("/home/sam/Downloads/MarketBackground.png", 300,700,true,false,false,false,false,false));
    row8.push_back(new Tile("/home/sam/Downloads/MarketBackground.png", 400,700,true,false,false,false,false,false));
    row8.push_back(new Tile("/home/sam/Downloads/MarketBackground.png", 500,700,true,false,false,false,false,false));
    row8.push_back(new Tile("/home/sam/Downloads/MarketBackground.png", 600,700,true,false,false,false,false,false));
    row8.push_back(new Tile("/home/sam/Downloads/MarketBackground.png", 700,700,true,false,false,false,false,false));
    row8.push_back(new Tile("/home/sam/Downloads/MarketBackground.png", 800,700,true,false,false,false,false,false));
    row8.push_back(new Tile("/home/sam/Downloads/MarketBackground.png", 900,700,true,false,false,false,false,false));
    marketTile.push_back(row8);

    std::vector<Tile*> row9; //to reference specific tiles, pointer is used
    row9.push_back(new Tile("/home/sam/Downloads/MarketBackground.png", 0,800,true,false,false,false,false,false)); //r1,c1
    row9.push_back(new Tile("/home/sam/Downloads/MarketBackground.png", 100,800,true,false,false,false,false,false));
    row9.push_back(new Tile("/home/sam/Downloads/MarketBackground.png", 200,800,true,false,false,false,false,false));
    row9.push_back(new Tile("/home/sam/Downloads/MarketBackground.png", 300,800,true,false,false,false,false,false));
    row9.push_back(new Tile("/home/sam/Downloads/MarketBackground.png", 400,800,true,false,false,false,false,false));
    row9.push_back(new Tile("/home/sam/Downloads/MarketBackground.png", 500,800,true,false,false,false,false,false));
    row9.push_back(new Tile("/home/sam/Downloads/MarketBackground.png", 600,800,true,false,false,false,false,false));
    row9.push_back(new Tile("/home/sam/Downloads/MarketBackground.png", 700,800,true,false,false,false,false,false));
    row9.push_back(new Tile("/home/sam/Downloads/MarketBackground.png", 800,800,true,false,false,false,false,false));
    row9.push_back(new Tile("/home/sam/Downloads/MarketBackground.png", 900,800,true,false,false,false,false,false));
    marketTile.push_back(row9);

    std::vector<Tile*> row10; //to reference specific tiles, pointer is used
    row10.push_back(new Tile("/home/sam/Downloads/Rock.png", 0,900,true,false,false,false,false,false)); //r1,c1
    row10.push_back(new Tile("/home/sam/Downloads/InvenSlot.png", 100,900,true,false,false,false,false,false));
    row10.push_back(new Tile("/home/sam/Downloads/InvenHoe.png", 200,900,true,false,false,false,false,false));
    row10.push_back(new Tile("/home/sam/Downloads/InvenWaterCan.png", 300,900,true,false,false,false,false,false));
    row10.push_back(new Tile("/home/sam/Downloads/InvenFert.png", 400,900,true,false,false,false,false,false));
    row10.push_back(new Tile("/home/sam/Downloads/InvenTomatoSeed.png", 500,900,true,false,false,false,false,false));
    row10.push_back(new Tile("/home/sam/Downloads/InvenCarrotSeed.png", 600,900,true,false,false,false,false,false));
    row10.push_back(new Tile("/home/sam/Downloads/InvenOnionSeed.png", 700,900,true,false,false,false,false,false));
    row10.push_back(new Tile("/home/sam/Downloads/InvenSlot.png", 800,900,true,false,false,false,false,false));
    row10.push_back(new Tile("/home/sam/Downloads/Rock.png", 900,900,true,false,false,false,false,false));
    marketTile.push_back(row10);

}

void World::setMap(){
    tile.clear();

    
    std::vector<Tile*> row1;
    row1.push_back(new Tile("/home/sam/Downloads/Grass1.png", 0,0,true,false,false,false,false,false)); 
    row1.push_back(new Tile("/home/sam/Downloads/Grass1.png", 100,0,true,false,false,false,false,false));
    row1.push_back(new Tile("/home/sam/Downloads/Grass1.png", 200,0,true,false,false,false,false,false));
    row1.push_back(new Tile("/home/sam/Downloads/Grass1.png", 300,0,true,false,false,false,false,false));
    row1.push_back(new Tile("/home/sam/Downloads/Grass1.png", 400,0,true,false,false,false,false,false));
    row1.push_back(new Tile("/home/sam/Downloads/Grass1.png", 500,0,true,false,false,false,false,false));
    row1.push_back(new Tile("/home/sam/Downloads/Grass1.png", 600,0,true,false,false,false,false,false));
    row1.push_back(new Tile("/home/sam/Downloads/Grass1.png", 700,0,true,false,false,false,false,false));
    row1.push_back(new Tile("/home/sam/Downloads/Grass1.png", 800,0,true,false,false,false,false,false));
    row1.push_back(new Tile("/home/sam/Downloads/Grass1.png", 900,0,false,false,true,false,false,false));
    tile.push_back(row1);
    /*(std::string imageName, float xpos, float ypos, 
    bool isGrass, bool isInventory, bool isMarket, bool isVeg, bool isSoil, bool isHarvestable)*/

    std::vector<Tile*> row2; //to reference specific tiles, pointer is used
    row2.push_back(new Tile("/home/sam/Downloads/Grass1.png", 0,100,true,false,false,false,false,false)); //r1,c1
    row2.push_back(new Tile("/home/sam/Downloads/Grass1.png", 100,100,true,false,false,false,false,false));
    row2.push_back(new Tile("/home/sam/Downloads/Grass1.png", 200,100,true,false,false,false,false,false));
    row2.push_back(new Tile("/home/sam/Downloads/Grass1.png", 300,100,true,false,false,false,false,false));
    row2.push_back(new Tile("/home/sam/Downloads/Grass1.png", 400,100,true,false,false,false,false,false));
    row2.push_back(new Tile("/home/sam/Downloads/Grass1.png", 500,100,true,false,false,false,false,false));
    row2.push_back(new Tile("/home/sam/Downloads/Grass1.png", 600,100,true,false,false,false,false,false));
    row2.push_back(new Tile("/home/sam/Downloads/Grass1.png", 700,100,true,false,false,false,false,false));
    row2.push_back(new Tile("/home/sam/Downloads/Grass1.png", 800,100,true,false,false,false,false,false));
    row2.push_back(new Tile("/home/sam/Downloads/Grass1.png", 900,100,true,false,false,false,false,false));
    tile.push_back(row2);

    std::vector<Tile*> row3; //to reference specific tiles, pointer is used
    row3.push_back(new Tile("/home/sam/Downloads/Grass1.png", 0,200,true,false,false,false,false,false)); //r1,c1
    row3.push_back(new Tile("/home/sam/Downloads/Grass1.png", 100,200,true,false,false,false,false,false));
    row3.push_back(new Tile("/home/sam/Downloads/Grass1.png", 200,200,true,false,false,false,false,false));
    row3.push_back(new Tile("/home/sam/Downloads/Grass1.png", 300,200,true,false,false,false,false,false));
    row3.push_back(new Tile("/home/sam/Downloads/Grass1.png", 400,200,true,false,false,false,false,false));
    row3.push_back(new Tile("/home/sam/Downloads/Grass1.png", 500,200,true,false,false,false,false,false));
    row3.push_back(new Tile("/home/sam/Downloads/Grass1.png", 600,200,true,false,false,false,false,false));
    row3.push_back(new Tile("/home/sam/Downloads/Grass1.png", 700,200,true,false,false,false,false,false));
    row3.push_back(new Tile("/home/sam/Downloads/Grass1.png", 800,200,true,false,false,false,false,false));
    row3.push_back(new Tile("/home/sam/Downloads/Grass1.png", 900,200,true,false,false,false,false,false));
    tile.push_back(row3);

    std::vector<Tile*> row4; //to reference specific tiles, pointer is used
    row4.push_back(new Tile("/home/sam/Downloads/Grass1.png", 0,300,true,false,false,false,false,false)); //r1,c1
    row4.push_back(new Tile("/home/sam/Downloads/Grass1.png", 100,300,true,false,false,false,false,false));
    row4.push_back(new Tile("/home/sam/Downloads/Grass1.png", 200,300,true,false,false,false,false,false));
    row4.push_back(new Tile("/home/sam/Downloads/Grass1.png", 300,300,true,false,false,false,false,false));
    row4.push_back(new Tile("/home/sam/Downloads/Grass1.png", 400,300,true,false,false,false,false,false));
    row4.push_back(new Tile("/home/sam/Downloads/Grass1.png", 500,300,true,false,false,false,false,false));
    row4.push_back(new Tile("/home/sam/Downloads/Grass1.png", 600,300,true,false,false,false,false,false));
    row4.push_back(new Tile("/home/sam/Downloads/Grass1.png", 700,300,true,false,false,false,false,false));
    row4.push_back(new Tile("/home/sam/Downloads/Grass1.png", 800,300,true,false,false,false,false,false));
    row4.push_back(new Tile("/home/sam/Downloads/Grass1.png", 900,300,true,false,false,false,false,false));
    tile.push_back(row4);

    std::vector<Tile*> row5; //to reference specific tiles, pointer is used
    row5.push_back(new Tile("/home/sam/Downloads/Grass1.png", 0,400,true,false,false,false,false,false)); //r1,c1
    row5.push_back(new Tile("/home/sam/Downloads/Grass1.png", 100,400,true,false,false,false,false,false));
    row5.push_back(new Tile("/home/sam/Downloads/Grass1.png", 200,400,true,false,false,false,false,false));
    row5.push_back(new Tile("/home/sam/Downloads/Grass1.png", 300,400,true,false,false,false,false,false));
    row5.push_back(new Tile("/home/sam/Downloads/Grass1.png", 400,400,true,false,false,false,false,false));
    row5.push_back(new Tile("/home/sam/Downloads/Grass1.png", 500,400,true,false,false,false,false,false));
    row5.push_back(new Tile("/home/sam/Downloads/Grass1.png", 600,400,true,false,false,false,false,false));
    row5.push_back(new Tile("/home/sam/Downloads/Grass1.png", 700,400,true,false,false,false,false,false));
    row5.push_back(new Tile("/home/sam/Downloads/Grass1.png", 800,400,true,false,false,false,false,false));
    row5.push_back(new Tile("/home/sam/Downloads/Grass1.png", 900,400,true,false,false,false,false,false));
    tile.push_back(row5);

    std::vector<Tile*> row6; //to reference specific tiles, pointer is used
    row6.push_back(new Tile("/home/sam/Downloads/Grass1.png", 0,500,true,false,false,false,false,false)); //r1,c1
    row6.push_back(new Tile("/home/sam/Downloads/Grass1.png", 100,500,true,false,false,false,false,false));
    row6.push_back(new Tile("/home/sam/Downloads/Grass1.png", 200,500,true,false,false,false,false,false));
    row6.push_back(new Tile("/home/sam/Downloads/Grass1.png", 300,500,true,false,false,false,false,false));
    row6.push_back(new Tile("/home/sam/Downloads/Grass1.png", 400,500,true,false,false,false,false,false));
    row6.push_back(new Tile("/home/sam/Downloads/Grass1.png", 500,500,true,false,false,false,false,false));
    row6.push_back(new Tile("/home/sam/Downloads/Grass1.png", 600,500,true,false,false,false,false,false));
    row6.push_back(new Tile("/home/sam/Downloads/Grass1.png", 700,500,true,false,false,false,false,false));
    row6.push_back(new Tile("/home/sam/Downloads/Grass1.png", 800,500,true,false,false,false,false,false));
    row6.push_back(new Tile("/home/sam/Downloads/Grass1.png", 900,500,true,false,false,false,false,false));
    tile.push_back(row6);

    std::vector<Tile*> row7; //to reference specific tiles, pointer is used
    row7.push_back(new Tile("/home/sam/Downloads/Grass1.png", 0,600,true,false,false,false,false,false)); //r1,c1
    row7.push_back(new Tile("/home/sam/Downloads/Grass1.png", 100,600,true,false,false,false,false,false));
    row7.push_back(new Tile("/home/sam/Downloads/Grass1.png", 200,600,true,false,false,false,false,false));
    row7.push_back(new Tile("/home/sam/Downloads/Grass1.png", 300,600,true,false,false,false,false,false));
    row7.push_back(new Tile("/home/sam/Downloads/Grass1.png", 400,600,true,false,false,false,false,false));
    row7.push_back(new Tile("/home/sam/Downloads/Grass1.png", 500,600,true,false,false,false,false,false));
    row7.push_back(new Tile("/home/sam/Downloads/Grass1.png", 600,600,true,false,false,false,false,false));
    row7.push_back(new Tile("/home/sam/Downloads/Grass1.png", 700,600,true,false,false,false,false,false));
    row7.push_back(new Tile("/home/sam/Downloads/Grass1.png", 800,600,true,false,false,false,false,false));
    row7.push_back(new Tile("/home/sam/Downloads/Grass1.png", 900,600,true,false,false,false,false,false));
    tile.push_back(row7);

    std::vector<Tile*> row8; //to reference specific tiles, pointer is used
    row8.push_back(new Tile("/home/sam/Downloads/Grass1.png", 0,700,true,false,false,false,false,false)); //r1,c1
    row8.push_back(new Tile("/home/sam/Downloads/Grass1.png", 100,700,true,false,false,false,false,false));
    row8.push_back(new Tile("/home/sam/Downloads/Grass1.png", 200,700,true,false,false,false,false,false));
    row8.push_back(new Tile("/home/sam/Downloads/Grass1.png", 300,700,true,false,false,false,false,false));
    row8.push_back(new Tile("/home/sam/Downloads/Grass1.png", 400,700,true,false,false,false,false,false));
    row8.push_back(new Tile("/home/sam/Downloads/Grass1.png", 500,700,true,false,false,false,false,false));
    row8.push_back(new Tile("/home/sam/Downloads/Grass1.png", 600,700,true,false,false,false,false,false));
    row8.push_back(new Tile("/home/sam/Downloads/Grass1.png", 700,700,true,false,false,false,false,false));
    row8.push_back(new Tile("/home/sam/Downloads/Grass1.png", 800,700,true,false,false,false,false,false));
    row8.push_back(new Tile("/home/sam/Downloads/Grass1.png", 900,700,true,false,false,false,false,false));
    tile.push_back(row8);

    std::vector<Tile*> row9; //to reference specific tiles, pointer is used
    row9.push_back(new Tile("/home/sam/Downloads/Grass1.png", 0,800,true,false,false,false,false,false)); //r1,c1
    row9.push_back(new Tile("/home/sam/Downloads/Grass1.png", 100,800,true,false,false,false,false,false));
    row9.push_back(new Tile("/home/sam/Downloads/Grass1.png", 200,800,true,false,false,false,false,false));
    row9.push_back(new Tile("/home/sam/Downloads/Grass1.png", 300,800,true,false,false,false,false,false));
    row9.push_back(new Tile("/home/sam/Downloads/Grass1.png", 400,800,true,false,false,false,false,false));
    row9.push_back(new Tile("/home/sam/Downloads/Grass1.png", 500,800,true,false,false,false,false,false));
    row9.push_back(new Tile("/home/sam/Downloads/Grass1.png", 600,800,true,false,false,false,false,false));
    row9.push_back(new Tile("/home/sam/Downloads/Grass1.png", 700,800,true,false,false,false,false,false));
    row9.push_back(new Tile("/home/sam/Downloads/Grass1.png", 800,800,true,false,false,false,false,false));
    row9.push_back(new Tile("/home/sam/Downloads/Grass1.png", 900,800,true,false,false,false,false,false));
    tile.push_back(row9);

    std::vector<Tile*> row10; //to reference specific tiles, pointer is used
    row10.push_back(new Tile("/home/sam/Downloads/HarvestButton.png", 0,900,true,false,false,false,false,false)); //r1,c1
    row10.push_back(new Tile("/home/sam/Downloads/InvenSlot.png", 100,900,true,false,false,false,false,false));
    row10.push_back(new Tile("/home/sam/Downloads/InvenHoe.png", 200,900,true,false,false,false,false,false));
    row10.push_back(new Tile("/home/sam/Downloads/InvenWaterCan.png", 300,900,true,false,false,false,false,false));
    row10.push_back(new Tile("/home/sam/Downloads/InvenFert.png", 400,900,true,false,false,false,false,false));
    row10.push_back(new Tile("/home/sam/Downloads/InvenTomatoSeed.png", 500,900,true,false,false,false,false,false));
    row10.push_back(new Tile("/home/sam/Downloads/InvenCarrotSeed.png", 600,900,true,false,false,false,false,false));
    row10.push_back(new Tile("/home/sam/Downloads/InvenOnionSeed.png", 700,900,true,false,false,false,false,false));
    row10.push_back(new Tile("/home/sam/Downloads/InvenSlot.png", 800,900,true,false,false,false,false,false));
    row10.push_back(new Tile("/home/sam/Downloads/NextDayButton.png", 900,900,true,false,false,false,false,false));
    tile.push_back(row10);
}