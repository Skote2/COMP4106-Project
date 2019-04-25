#include <vector>
#include "Product.h"

class Purchase {
    public:
        Purchase(vector<Product*> p);
        
        int getNumItems();
        vector<Product*> getProducts();
    private:
        float total = 0.0;
        vector<Product*> items;
};