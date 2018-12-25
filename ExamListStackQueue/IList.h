#ifndef UNTITLED1_ILIST_H
#define UNTITLED1_ILIST_H
class IList {
public:
    virtual void add(int value) = 0;
    virtual void addToBegin(int value) = 0;
    virtual int size() = 0;
    virtual int get(int index) = 0;
    virtual bool isEmpty() = 0;
    virtual void remove(int index) = 0;
    virtual bool contains(int value) = 0;
};
#endif //UNTITLED1_ILIST_H
