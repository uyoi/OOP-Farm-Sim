

#include <SFML/Graphics.hpp>
#include <math.h>
#include "World.cpp"
#include "Tile.cpp"
//#include "tool.cpp"
#include <string>
using namespace sf;
using namespace std;


int main(){
    const float windowHeight = 1000; //Height of the game window in pixels that can't be changed
    const float windowWidth = 1000;  //Width of the game window in pixels that can't be changed

    RenderWindow window(VideoMode(windowWidth, windowHeight),"not stardew valley"); //Creates the window in which the game will run with given height and width

    Texture texture;
    Sprite sprite;
    sprite.setTexture(texture);
    Font font;
    Text text;
    Text tools;
    Text seeds;
    Text money;
    Text nextDay;
    Text Harvest;
    int currMoney = 100;
    auto MoneyDisplay = std::to_string(currMoney);
    /*
    int hoeSelected = 1;
    int waterCanSelected = 1;
    int fertSelected = 1;
    int onionSeedSelected = 1;
    int carrotSeedSelected = 1;
    int tomatoSeedSelected = 1;

    if(Keyboard::isKeyPressed(Keyboard::3)){
        hoeSelected++;
    }
    if(Keyboard::isKeyPressed(Keyboard::4)){
        waterCanSelected++;
    }
    if(Keyboard::isKeyPressed(Keyboard::5)){
        fertSelected++;
    }
    if(Keyboard::isKeyPressed(Keyboard::6)){
        tomatoSeedSelected++;
    }
    if(Keyboard::isKeyPressed(Keyboard::7)){
        carrotSeedSelected++;
    }
    if(Keyboard::isKeyPressed(Keyboard::8)){
        onionSeedSelected++;
    }
*/
    
    World world = World();

    int groundStates[9][10];
    int boughtLand[9][10];
    int isFertilised[9][10];

    for(int e = 0; e < 9; e++){
        for(int y = 0; y < 10; y++){
            world.groundStates[e][y] = 0;
        }
    }
   
    for(int e = 0; e < 9; e++){
        for(int y = 0; y < 10; y++){
            if((2 <= e <= 6) && (2 <= y <= 6)){
                world.boughtLand[e][y] = 1;
            }
            else{
                world.boughtLand[e][y] = 0;
            }
        }
    }
    
    for(int z = 0; z < 9; z++){
        for(int c = 0; c < 10; c++){
            world.isFertilised[z][c] = 0;
        }
    }
   
    while(window.isOpen()){
        Event event;
        while(window.pollEvent(event)){
            if(event.type == Event::Closed){
                window.close();
            }
        }

        window.clear();

        if(Keyboard::isKeyPressed(Keyboard::Tab)){
            for(int n = 0; n < 10; n++){
                for(int m = 0; m < 10; m++){
                    window.draw(world.marketTile[n][m] -> sprite);
                }
            }
            if(!font.loadFromFile("/home/sam/Downloads/Font/lemon_milk/LEMONMILK-Bold.otf"))
                throw("Could not load font");

            text.setFont(font);
            text.setCharacterSize(80);
            text.setColor(Color::Black);
            text.setStyle(Text::Bold);
            text.setString("MARKET");
            text.setPosition(window.getSize().x/3,0);
            window.draw(text);

            tools.setFont(font);
            tools.setCharacterSize(50);
            tools.setColor(Color::Black);
            tools.setStyle(Text::Bold);
            tools.setString("TOOLS");
            tools.setPosition(window.getSize().x/5,(window.getSize().y/10)+20);
            window.draw(tools);
            
            seeds.setFont(font);
            seeds.setCharacterSize(50);
            seeds.setColor(Color::Black);
            seeds.setStyle(Text::Bold);
            seeds.setString("SEEDS & FERTILISER");
            seeds.setPosition(window.getSize().x/5,((window.getSize().y)*3/10)+20);
            window.draw(seeds);

            money.setFont(font);
            money.setCharacterSize(50);
            money.setColor(Color::Black);
            money.setStyle(Text::Bold);
            money.setString(MoneyDisplay);
            money.setPosition(window.getSize().x/4,((window.getSize().y)*6/10)+20);
            window.draw(money);


        }
        else{
            for(int i = 0; i < 10; i++){ //i corresponds to the tiles on the y-axis
                for(int j = 0; j < 10; j++){ //j corresponds to the tiles on the x-axis
                    
                    if((Mouse::isButtonPressed(Mouse::Left)) && (Keyboard::isKeyPressed(Keyboard::Num2)) && (world.groundStates[i][j] = 0)){ //be sure to add that hoe is selected and tile was in grass state beforehand using bool
                        if(Mouse::getPosition(window).y < 900){
                            
                                world.tile[(Mouse::getPosition(window).y)/100][(Mouse::getPosition(window).x)/100] = new Tile("/home/sam/Downloads/Soil.png",((Mouse::getPosition(window).x)/100)*100,((Mouse::getPosition(window).y)/100)*100,false,false,false,false,false,false);
                                world.groundStates[i][j] = 1; //changes state from soil to grass
                        }
                    }

                    if((Mouse::isButtonPressed(Mouse::Left)) && (Keyboard::isKeyPressed(Keyboard::Num3)) && (world.groundStates[i][j] = 1)){ //be sure to add that hoe is selected and tile was in grass state beforehand using bool
                        if(Mouse::getPosition(window).y < 900){
                            
                                world.tile[(Mouse::getPosition(window).y)/100][(Mouse::getPosition(window).x)/100] = new Tile("/home/sam/Downloads/WetSoil.png",((Mouse::getPosition(window).x)/100)*100,((Mouse::getPosition(window).y)/100)*100,false,false,false,false,false,false);
                                world.groundStates[i][j] = 2; //changes state soil to wet soil
                        }
                    }
                    
                    if((Mouse::isButtonPressed(Mouse::Left)) && (Keyboard::isKeyPressed(Keyboard::Num4)) && (world.groundStates[i][j] = 2)){ //be sure to add that hoe is selected and tile was in grass state beforehand using bool
                        if(Mouse::getPosition(window).y < 900){
                            
                                world.tile[(Mouse::getPosition(window).y)/100][(Mouse::getPosition(window).x)/100] = new Tile("/home/sam/Downloads/Soil.png",((Mouse::getPosition(window).x)/100)*100,((Mouse::getPosition(window).y)/100)*100,false,false,false,false,false,false);
                                world.groundStates[i][j] = 2; //changes state to fertilised
                                world.isFertilised[i][j] = 1;
                        }
                    }

                    if((Mouse::isButtonPressed(Mouse::Left)) && (Keyboard::isKeyPressed(Keyboard::Num5)) && (world.groundStates[i][j] = 2)){ //be sure to add that hoe is selected and tile was in grass state beforehand using bool
                        if(Mouse::getPosition(window).y < 900){
                            
                                world.tile[(Mouse::getPosition(window).y)/100][(Mouse::getPosition(window).x)/100] = new Tile("/home/sam/Downloads/SoilPlanted.png",((Mouse::getPosition(window).x)/100)*100,((Mouse::getPosition(window).y)/100)*100,false,false,false,false,false,false);
                                world.groundStates[i][j] = 3; //changes state from wet soil fertilised to seeded
                        }
                    }

                    window.draw(world.tile[i][j] -> sprite);
                }
            }
        }

        
        
        window.display();
    }
}