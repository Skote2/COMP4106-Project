#include "AI.h"

using namespace std;

class Node {
    public:
        Node(short x, short y);
        Node(short x, short y, Floor::move m, queue<Floor::move> p);
    private:
        friend class BFS;
        tuple<short, short> cords;
        queue<Floor::move> path;
};
class BFS : public AI {
    public:
        BFS();
        BFS(Floor f);
        ~BFS();

        queue<Floor::move>* getShoppingList();
    protected:
        Floor* searchState;
        queue<Floor::move> shoppingList;
        void runSearch();
};