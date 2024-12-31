#include "node.h"

node::node() : studentID(0), studentName(""), next(nullptr) {}

node::node(int id, string name) : studentID(id), studentName(name), next(nullptr) {}

void node::set_studentID(int id) {
    studentID = id;
}

int node::get_studentID() const {
    return studentID;
}

void node::set_studentName(string name) {
    studentName = name;
}

string node::get_studentName() const {
    return studentName;
}

void node::set_next(node* nxt) {
    next = nxt;
}

node* node::get_next() const {
    return next;
}

node::~node() {}
