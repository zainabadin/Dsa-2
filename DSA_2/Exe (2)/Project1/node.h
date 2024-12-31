#pragma once
#include <iostream>
#include <string>
using namespace std;

class node {
private:
    int studentID;
    string studentName;
    node* next;

public:
    node();
    void set_student(int id, string name);
    int get_studentID();
    string get_studentName();
    void set_next(node*);
    node* get_next();
    ~node();
};
