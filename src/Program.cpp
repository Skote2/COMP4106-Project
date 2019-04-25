#include <iostream>
#include "Purchase.h"

using namespace std;

int main(int argc, char *argv[]){
    Product* a = new Product("a", 1.00);
    Product* b = new Product("b", 1.25);
    Product* c = new Product("c", 2.50);
    Product* d = new Product("d", 6.98);

    vector<Product*> arr = {a, b, c, d};
    
    Purchase* p = new Purchase(arr);

    arr = p->getProducts();
    for (auto it = arr.begin(); it != arr.end(); ++it)
        cout << (*it)->getName() << endl;

    return 0;
}