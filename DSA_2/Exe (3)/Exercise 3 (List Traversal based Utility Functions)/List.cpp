#include "List.h"

List::List() : head(nullptr) {}

node* List::get_head() const {
    return head;
}

void List::insert_end(int id, string name) {
    node* newNode = new node(id, name);
    if (head == nullptr) {
        head = newNode;
    }
    else {
        node* temp = head;
        while (temp->get_next() != nullptr) {
            temp = temp->get_next();
        }
        temp->set_next(newNode);
    }
}

void List::traverse() const {
    node* temp = head;
    while (temp != nullptr) {
        cout << "ID: " << temp->get_studentID() << ", Name: " << temp->get_studentName() << " -> ";
        temp = temp->get_next();
    }
    cout << "NULL" << endl;
}

List::~List() {
    node* current = head;
    while (current != nullptr) {
        node* next = current->get_next();
        delete current;
        current = next;
    }
}
