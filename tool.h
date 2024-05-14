#ifndef __TOOL_H__
#define __TOOL_H__

#include "Item.h"
#include <string>

class Tool : public Item {
private:
    int daily_uses;
    int tool_check;
    int break_target = 1;
    int range = 10;

public:
    Tool(std::string name, float cost);
    void use_item(Item* item);
    //void select_item(Item* item, keyPressed);
    void upgrade_tool(Item* item);
    bool tool_break();
    bool hoeSelected();
    bool waterCanSelected();
    bool fertSelected();
    bool carrotSeedSelected();
    bool onionSeedSelected();
    bool tomatoSeedSelected();
    ~Tool();
};


#endif // __TOOL_H__