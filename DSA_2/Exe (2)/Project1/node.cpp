#include "node.h"

node::node() {
    studentID = 0;
    studentName = "";
    next = NULL;
}

void node::set_student(int id, string name) {
    this->studentID = id;
    this->studentName = name;
}

int node::get_studentID() {
    return studentID;
}

string node::get_studentName() {
    return studentName;
}

void node::set_next(node* temp) {
    next = temp;
}

node* node::get_next() {
    return next;
}

node::~node() {
}
