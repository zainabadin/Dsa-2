#pragma once
#include "node.h"

class List {
private:
    node* head; 

public:
    List();   
    ~List(); 

    bool emptyList();

    void insertAfter(int oldV, int newV);

    void deleteNode(int value);

    void insert_begin(int value);

    void insert_end(int value);

    void traverse();
};
