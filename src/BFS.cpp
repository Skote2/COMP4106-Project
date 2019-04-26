#include "BFS.h"

Node::Node(short x, short y) : cords(make_tuple(x, y)) {}
Node::Node(short x, short y, Floor::move m, queue<Floor::move> p) : cords(make_tuple(x, y)), path(p) {
    p.push(m);
}

BFS::BFS() {
    runSearch();
}
BFS::BFS(Floor f) {
    runSearch();
    searchState = new Floor(f);
}
BFS::~BFS(){
    delete searchState;
}

std::queue<Floor::move>* BFS::getShoppingList() {
    return &shoppingList;
}

void BFS::runSearch() {
    Node* head = new Node(x, y);
    Node* curNode;
    queue<Node*> curNodes  = queue<Node*>();
    
    curNodes.push(head);
    short nodeX, nodeY;
    while(!curNodes.empty()){
        curNode = curNodes.front();
        curNodes.pop();
        for (short i = 0; i < 4; ++i){
            short nodeX = get<0>(curNode->cords);
            short nodeY = get<1>(curNode->cords);
            Floor::move m = (Floor::move) i;
            switch (i) {
                case(Floor::move::up):
                    ++nodeY;
                    if (!searchState->getState(nodeX, nodeY))
                        curNodes.push(new Node(nodeX, nodeY, m, curNode->path));
                    break;
                case(Floor::move::down):
                    --nodeY;
                    if (!searchState->getState(nodeX, nodeY))
                        curNodes.push(new Node(nodeX, nodeY, m, curNode->path));
                    break;
                case(Floor::move::left):
                    --nodeX;
                    if (!searchState->getState(nodeX, nodeY))
                        curNodes.push(new Node(nodeX, nodeY, m, curNode->path));
                    break;
                case(Floor::move::right):
                    ++nodeX;
                    if (!searchState->getState(nodeX, nodeY))
                        curNodes.push(new Node(nodeX, nodeY, m, curNode->path));
                    break;
            }
        }
    }
    delete head;
}