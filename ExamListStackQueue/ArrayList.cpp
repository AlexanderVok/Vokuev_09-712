#include "ArrayList.h"
#include <iostream>
using namespace std;

void clearArray(int*array, int lower, int higher) {
    for (int i = lower; i < higher; ++i) {
        array[i] = 0;
    }
}

ArrayList::ArrayList() {
    this->maxSize = DEFAULT_SIZE;
    this->elements = new int[this->maxSize];
    this->currentSize = 0;
    clearArray(this->elements, this->currentSize, this->maxSize);
}


bool ArrayList::isEmpty() {
    return this->currentSize == 0;
}

void ArrayList::add(int value) {
    if (this->currentSize == this->maxSize) {
        this->maxSize *= CAPACITY_VALUE;
        int *arr = new int[this->maxSize];
        for (int i = 0; i < this->currentSize; i++) {
            arr[i] = this->elements[i];
        }
        arr[this->currentSize] = value;
        int*current = this->elements;
        this->elements = arr;
        delete current;
        clearArray(this->elements, this->currentSize+1, this->maxSize);
    }else {
        this->elements[currentSize] = value;
    }
    this->currentSize++;
}

void ArrayList::addToBegin(int value) {
    int newSizeMassive = this->maxSize;
    int *arr;
    if (this->currentSize == this->maxSize) {
        newSizeMassive = this->maxSize*CAPACITY_VALUE;
        arr = new int[newSizeMassive];
    }else {
        arr = new int[this->maxSize];
    }
    for (int i = 0; i < currentSize; ++i){
        arr[i + 1] = this->elements[i];
    }
    arr[0] = value;
    int*current = this->elements;
    this->elements = arr;
    delete current;
    this->maxSize = newSizeMassive;
    this->currentSize++;
}

int ArrayList::size() {
    return this->currentSize;
}

int ArrayList::get(int index) {
    if(index>currentSize){
        cout << "no item with this index";
        return 0;
    }else{
        return this->elements[index];
    }
}

void ArrayList::remove(int index) {
    if (index < this->currentSize) {
        for (int i = index; i < this->currentSize-1; ++i) {
            this->elements[i] = this->elements[i + 1];
        }
    }
    this->currentSize--;
}

bool ArrayList::contains(int value) {
    for(int i =0; i < currentSize; i++){
        if (value==this->elements[i]){
            return true;
        }
    }
    return false;
}
void ArrayList::show() {
    for (int i = 0; i < this->currentSize; ++i){
        cout << this->elements[i] << " ";

    }
}
