#include "Node_Queue.h"
Node_Queue::Node_Queue(Node* node) {
    this->node = node;
    this->next = nullptr;
}

Node* Node_Queue::getNode() {
    return this->node;
}

void Node_Queue::setNext(Node_Queue *next) {
    this->next = next;
}

Node_Queue *Node_Queue::getNext() {
    return this->next;
}

void Node_Queue::setPrevious(Node_Queue *previous) {
    this->previous = previous;
}

Node_Queue *Node_Queue::getPrevious() {
    return this->previous;
}
