#include "node.h"

node::node() {
    val = 0;
    next = NULL;
}

void node::set_val(int val) {
    this->val = val;
}

int node::get_val() {
    return val;
}

void node::set_next(node* temp) {
    next = temp;
}

node* node::get_next() {
    return next;
}

node::~node() {
}
