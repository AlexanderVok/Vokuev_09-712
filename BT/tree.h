#include "Node.h"

class tree {
private:
    Node*root;
public:
    tree();
    tree(int value);
    void add(int value);
    void print();
    void del(int element);
    bool search(int element);
};
