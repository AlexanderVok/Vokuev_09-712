#ifndef UNTITLED1_STACKLISTIMPL_H
#define UNTITLED1_STACKLISTIMPL_H


#include "IStack.h"
#include "LinkedList.h"
class StackListImpl : public IStack {
private:
    IList *list;
public:
    StackListImpl(IList *list);
    void push(int value) override;
    int pop() override;
};
#endif //UNTITLED1_STACKLISTIMPL_H
