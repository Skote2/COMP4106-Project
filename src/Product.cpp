#include "Product.h"

Product::Product(string prodName, float prodCost) {
    name = prodName;
    cost = prodCost;
}

Product::Product(Product* p2) {
    name = p2->name;
    cost = p2->cost;
}

float   Product::getCost() { return cost; }
string  Product::getName() { return name; }