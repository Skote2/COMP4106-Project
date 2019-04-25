#include <string>
#include <tuple>

class Floor {
    public:
        enum move {up, down, left, right};

        //Constructors
        Floor();
        Floor(short l, short w);

        std::tuple<short, short>   getDimensions();
        std::string                 toString();
    private: //vars
        const short length;//rows
        const short width; //cols
        bool** grid;

        //Private helpers
        void initializeGrid();
        void setShelving();
};