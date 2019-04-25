#include <map>
#include <tuple>
#include <vector>

#include "Bot.h"
#include "Product.h"

using namespace std;

class Warehouse {
    public:
        Warehouse();
    private:
        Product** inventory;
        map<Product, vector<tuple<int, int>>> invLookup; // Key: Product, Val: Cords
};