#include <queue>

#include "Floor.h"

class AI {
    public:
        virtual std::queue<Floor::move>* getShoppingList() = 0;
    private:
        short x;
        short y;
        std::queue<Floor::move>* shoppingList;
};