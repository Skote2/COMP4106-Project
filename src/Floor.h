#include <string>
#include <tuple>

class Floor {
    public:
        enum move {up = 0, down = 1, left = 2, right = 3};

        //Constructors
        Floor();
        Floor(short l, short w);
        Floor(Floor* f2);

        std::tuple<short, short>    getDimensions();
        bool                        getState(short x, short y);
        void                        setState(bool s);
        std::string                 toString();
    private: //vars
        const short length;//rows
        const short width; //cols
        bool** grid;

        //Private helpers
        void initializeGrid();
        void setShelving();
};