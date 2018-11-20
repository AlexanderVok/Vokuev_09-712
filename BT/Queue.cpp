#include "Queue.h"
#include <iostream>
using namespace std;
int count;

Queue::Queue() {
    this->tail = nullptr;
    this->count = 0;
}

bool Queue::isEmpty()
{
    if (head == nullptr)
        return true;
    else return false;
}

void Queue::push(Node* value) {
    Node_Queue *newNode = new Node_Queue(value);
    if (this->isEmpty()) {
        this->tail = newNode;
        this->head = newNode;
    }
    else {
        newNode->setNext(this->tail);
        this->tail->setPrevious(newNode);
        this->tail = newNode;
    }
    count++;
}

Node* Queue::pop() {
    if (!this->isEmpty()) {
        Node* nodeFromQueue = this->head->getNode();
        Node_Queue *temp = this->head;
        this->head = this->head->getPrevious();
        delete(temp);
        count--;
        return nodeFromQueue;
    }
    else {
        throw "Empty queue!";
    }
}

void Queue::print() {
    cout << "end -> ";
    Node_Queue *currentNode = this->tail;
    for (int i = 0; i < this->count; i++) {
        cout << currentNode->getNode()->getValue() << " ";
        currentNode = currentNode->getNext();
    }
    cout << " -> begin";
    cout << endl;
}

void Queue::printReverse() {
    cout << "begin <- ";
    Node_Queue *currentNode = this->head;
    for (int i = 0; i < this->count; i++) {
        cout << currentNode->getNode() << " ";
        currentNode = currentNode->getPrevious();
    }
    cout << " <- end";
}
