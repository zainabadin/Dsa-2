#include "List.h"
#include <iostream>
using namespace std;

List::List() {
    head = NULL;
}

List::~List() {
    node* current = head;
    while (current != NULL) {
        node* nextNode = current->get_next();
        delete current;
        current = nextNode;
    }
}

bool List::emptyList() {
    return head == NULL;
}

void List::insert_end(int id, string name) {
    node* newNode = new node();
    newNode->set_student(id, name);
    newNode->set_next(NULL);

    if (head == NULL) {
        head = newNode;
    }
    else {
        node* temp = head;
        while (temp->get_next() != NULL) {
            temp = temp->get_next();
        }
        temp->set_next(newNode);
    }
}

void List::insert_begin(int id, string name) {
    node* newNode = new node();
    newNode->set_student(id, name);
    newNode->set_next(head);
    head = newNode;
}

void List::insertAfter(int oldID, int id, string name) {
    node* temp = head;
    while (temp != NULL && temp->get_studentID() != oldID) {
        temp = temp->get_next();
    }

    if (temp != NULL) {
        node* newNode = new node();
        newNode->set_student(id, name);
        newNode->set_next(temp->get_next());
        temp->set_next(newNode);
    }
    else {
        insert_end(id, name);
    }
}

void List::deleteNode(int id) {
    if (head == NULL) return;

    if (head->get_studentID() == id) {
        node* temp = head;
        head = head->get_next();
        delete temp;
        return;
    }

    node* temp = head;
    while (temp->get_next() != NULL && temp->get_next()->get_studentID() != id) {
        temp = temp->get_next();
    }

    if (temp->get_next() != NULL) {
        node* nodeToDelete = temp->get_next();
        temp->set_next(nodeToDelete->get_next());
        delete nodeToDelete;
    }
}

void List::traverse() {
    node* temp = head;
    while (temp != NULL) {
        cout << "ID: " << temp->get_studentID() << ", Name: " << temp->get_studentName() << " -> ";
        temp = temp->get_next();
    }
    cout << "NULL" << endl;
}

node* List::get_head() {
    return head;
}
