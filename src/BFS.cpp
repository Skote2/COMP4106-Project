#include "BFS.h"

BFS::BFS() {
    shoppingList = new std::queue<Floor::move>();
}

std::queue<Floor::move>* BFS::getShoppingList() {
    return shoppingList;
}