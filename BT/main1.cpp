#include <iostream>
#include "tree.h"
using namespace std;
int main() {
    tree*root = new tree(5);
    root->add(10);
    root->add(2);
    root->add(1);
    root->add(12);
    root->add(17);
    root->add(9);
    root->add(15);
    root->print();
    cout << endl << endl << endl;
    root->del(10);
    root->print();
    cout << endl << endl << endl;
    cout << "Searching " << " - "  <<root->search(12) << endl;
    return 0;
}
