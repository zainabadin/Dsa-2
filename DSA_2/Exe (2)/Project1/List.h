#pragma once
#include "node.h"

class List {
private:
    node* head;

public:
    List();
    ~List();

    bool emptyList();
    void insert_end(int id, string name);
    void insert_begin(int id, string name);
    void insertAfter(int oldID, int id, string name);
    void deleteNode(int id);
    void traverse();

    node* get_head(); 
};
