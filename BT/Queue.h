#ifndef UNTITLED64_QUEUE_H
#define UNTITLED64_QUEUE_H


#include "Node.h"
#include "Node_Queue.h"
class Queue {
private:
    Node_Queue *tail;
    Node_Queue *head;
    int count;
public:
    Queue();
    bool isEmpty();
    void push(Node* value);
    Node* pop();
    void print();
    void printReverse();

};


#endif //UNTITLED64_QUEUE_H
