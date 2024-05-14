#ifndef __ITEM_H__
#define __ITEM_H__

#include <string>


class Item {
protected:
    std::string name;
    int quantity;
    float cost;
public:
    Item() {};
    Item(std::string name, int quantity, float cost);
    void update_cost(float cost);
    void update_quantity(int quantity);
    int get_cost();
    int get_quantity();
    ~Item();
    virtual void use_item() = 0;
    virtual void select_item() = 0;
};


#endif // __ITEM_H__