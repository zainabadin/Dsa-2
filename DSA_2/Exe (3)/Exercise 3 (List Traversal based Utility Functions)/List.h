#pragma once
#include "node.h"

class List {
private:
    node* head;

public:
    List();
    node* get_head() const;
    void insert_end(int id, string name);
    void traverse() const;
    ~List();
};
