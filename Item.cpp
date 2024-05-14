#include "item.h"
#include <string>

Item::Item(std::string name, int quantity, float cost) {
    this->name = name;
    this->quantity = quantity;
    this->cost = cost;
}

void Item::update_cost(float cost) {
    this->cost = cost;
}

void Item::update_quantity(int quantity) {
    this->cost = cost;
}

int Item::get_cost() { return cost; }

int Item::get_quantity() { return quantity; }

Item::~Item() {};