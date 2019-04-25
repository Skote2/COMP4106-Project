#include "Purchase.h"

Purchase::Purchase(vector<Product*> p) : items(p) {
    for (vector<Product*>::iterator it = items.begin(); it != items.end(); ++it)
        total += (*it)->getCost();
}

int Purchase::getNumItems() { return items.size(); }
vector<Product*> Purchase::getProducts() { return items; }