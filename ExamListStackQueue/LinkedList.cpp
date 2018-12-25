#include "LinkedList.h"

LinkedList::LinkedList() {
    // this - указатель на экземпляр, для которого был
    // произведен вызов функции/конструктора
    (*this).top = nullptr;
    this->end = nullptr;
    this->count = 0;
}

bool LinkedList::isEmpty() {
    return this->top == nullptr;
}

void LinkedList::add(int value) {
    Node *newNode = new Node(value);
    if (this->end != nullptr) {
        this->end->next = newNode;
    } else {
        this->top = newNode;
    }
    this->end = newNode;
    this->count++;
}

void LinkedList::addToBegin(int value) {
    Node *newNode = new Node(value);
    newNode->next = this->top;
    this->top = newNode;
    this->count++;
}

int LinkedList::size() {
    return this->count;
}

/*int LinkedList::get(int index) {
        Node *current = this->top;
        for(int i=0; i< index; i++){
            current = current -> next;
        }
        return current->data;
    }*/

int LinkedList::get(int index) {
    int position = 1;
    if (this->count >= index) {
        for (Node *current = this->top; current; current = current->next, ++position) {
            if (position == index) {
                return current->data;
            }
        }
    }
    return 0;
}

/*void LinkedList::remove(int index) {
    Node *current = this->top;
    if(index==0){
        this->top =this->top->next;
        delete current;
    }else{
        for(int i=0; i< index-1; i++){
            current=current->next;
        }
        Node *cur = current->next;
        current->next = current->next->next;
        delete cur;
    }
}*/

void LinkedList::remove(int index) {
    int position = 0;
    bool ElementhasDeleted = false;
    if (this->count >= index) {
        if (index == 0) {
            Node*temp = this->top;
            this->top = this->top->next;
            delete temp;
        }
        else {
            for (Node* current = this->top; current && !ElementhasDeleted; current = current->next, position++) {
                if (index == position+1) {
                    Node*temp = current->next;
                    current->next = temp->next;
                    delete temp;
                    ElementhasDeleted = true;
                }
            }
        }
    }if (!ElementhasDeleted) {
        cout << "There isn`t element with this index" << endl;
    }
}

bool LinkedList::contains(int value) {
    Node*current = this->top;
    while (current) {
        if (current->data == value) {
            return true;
        }
        current = current->next;
    }
    return false;
}
