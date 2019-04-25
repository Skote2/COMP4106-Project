#include "AI.h"

class BFS : public AI {
    public:
        BFS();

        std::queue<Floor::move>* getShoppingList();
    private:
        std::queue<Floor::move>* shoppingList;
};