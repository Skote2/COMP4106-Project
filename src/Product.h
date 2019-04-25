#include <string>

using namespace std;

class Product {
    public:
        Product(string prodName, float prodCost);
        Product(Product* p2);

        float   getCost();
        string  getName();

    private:
        float  cost;
        string name;
};