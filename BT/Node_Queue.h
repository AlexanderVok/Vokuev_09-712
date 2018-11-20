#ifndef UNTITLED64_NODE_QUEUE_H
#define UNTITLED64_NODE_QUEUE_H


#include "Node.h"
class Node_Queue {
private:
    Node* node;
    Node_Queue *next;
    Node_Queue *previous;
public:
    Node_Queue(Node* value);
    Node* getNode();
    void setNext(Node_Queue *next);
    Node_Queue *getNext();
    void setPrevious(Node_Queue *previous);
    Node_Queue *getPrevious();
};

#endif //UNTITLED64_NODE_QUEUE_H
