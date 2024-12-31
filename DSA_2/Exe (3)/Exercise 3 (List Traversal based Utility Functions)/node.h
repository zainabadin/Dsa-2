#pragma once
#include <iostream>
using namespace std;

class node {
private:
    int studentID;
    string studentName;
    node* next;

public:
    node();
    node(int id, string name);
    void set_studentID(int id);
    int get_studentID() const;
    void set_studentName(string name);
    string get_studentName() const;
    void set_next(node* nxt);
    node* get_next() const;
    ~node();
};
