#include <queue>
#include <tuple>

#include "BFS.h"

using namespace std;

class Bot {
    public:
        bool move;

        Bot();
    private:
        AI* botType;
        queue<Floor::move> moves;
        tuple<short, short> cords;
};