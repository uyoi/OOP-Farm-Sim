#include "tool.h"
#include <string>
#include <time.h>
#include <SFML/Window.hpp>

Tool::Tool(std::string name, float cost) {
    this->name = name;
    this->cost = cost;
}

void Tool::use_item(Item* item) {
    

}

bool Tool::upgrade_tool(Item* item) {
    if(upgraded == true){
        change chances of it breaking
    }
}

    /*
    bool Tool::hoeSelected(int hoeSelected){
        if(hoeSelected % 2 == 0){
            return true;
        }
        else{
            return false;
        }
    } //checking to see if the user has selected the hoe
        
    bool Tool::waterCanSelected(int waterCanSelected){
        if(waterCanSelected % 2 == 0){
            return true;
        }
        else{
            return false;
        }
    }
    bool Tool::fertSelected(int fertSelected){
        if(fertSelected % 2 == 0){
            return true;
        }
        else{
            return false;
        }
    }
    bool Tool::carrotSeedSelected(int carrotSeedSelected){
        if(carrotSeedSelected % 2 == 0){
            return true;
        }
        else{
            return false;
        }
    }
    bool Tool::onionSeedSelected(int onionSeedSelected){
        if(onionSeedSelected % 2 == 0){
            return true;
        }
        else{
            return false;
        }
    }
    bool Tool::tomatoSeedSelected(int tomatoSeedSelected){
        if(tomatoSeedSelected % 2 == 0){
            return true;
        }
        else{
            return false;
        }
    }
*/
bool Tool::tool_break() {
    if(money > cost of new hoe){
        srand(time(NULL));
        int check = (rand() % range) + 1;
        if(check <= )
    }
}

Tool::~Tool() {}
