#include "Floor.h"

//Constructors//

Floor::Floor()                  : length(12), width(16) { initializeGrid(); }
Floor::Floor(short l, short w)  : length(l) , width(w)  { initializeGrid(); }
Floor::Floor(Floor* f2) : Floor(std::get<0>(f2->getDimensions()), std::get<1>(f2->getDimensions())) {
    for (short l = 0; l < length; ++l)
        for (short w = 0; w < width; ++w)
            grid[l][w] = f2->grid[l][w];
}

//////////////////////
// Public Functions //
//////////////////////

// Getters & Setters
std::tuple<short, short> Floor::getDimensions() { return std::make_tuple(length, width);  }
bool Floor::getState(short x, short y) { return grid[x][y]; }
void Floor::setState(bool s) { grid[length][width] = s; }

std::string Floor::toString() {
    std::string s = "┌";
    
    for (short w = 0; w < width; ++w)
        s += "─";
    s += "┐\n";
    for (short l = 0; l < length; ++l){
        s += "│";
        for (short w = 0; w < width; ++w)
            s += grid[l][w] ? "█" : ".";
        s += "│\n";
    }
    s += "└";
    for (short w = 0; w < width; ++w)
        s += "─";
    s += "┘\n";
    return s;
}


///////////////////
//Private helpers//
///////////////////
void Floor::initializeGrid() {
    grid = new bool*[length];
    for (short l = 0; l < length; ++l){
        grid[l] = new bool[width];
        for (short w = 0; w < width; ++w)
            grid[l][w] = false;
    }
    setShelving();
}
void Floor::setShelving() {//lay out shelves 2x2
    bool shelving;
    short col;
    for (short l = 2; l < length - 2; ++l){
        shelving = true;
        col = 1;
        for (short w = 0; w < width; ++w){
            if (shelving)
                grid[l][w] = true;
            ++col;
            if (col >= 2){
                col = 0;
                shelving = !shelving;
            }
        }
    }
}