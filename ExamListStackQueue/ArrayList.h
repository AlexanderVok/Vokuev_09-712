#ifndef UNTITLED1_ARRAYLIST_H
#define UNTITLED1_ARRAYLIST_H


#include "IList.h"
#include "LinkedList.h"
const int DEFAULT_SIZE = 10;
const int CAPACITY_VALUE = 2;
class ArrayList : public IList {
private:
    int *elements;
    int maxSize;
    int currentSize;
public:
    ArrayList();
    bool isEmpty() override;
    void add(int value) override;
    void addToBegin(int value) override;
    int size() override;
    int get(int index) override;
    void remove(int index) override;
    void show();
    bool contains(int value) override;
};

#endif //UNTITLED1_ARRAYLIST_H
