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

void List::insert_end(int value) {
    node* newNode = new node();
    newNode->set_val(value);
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

void List::insert_begin(int value) {
    node* newNode = new node();
    newNode->set_val(value);
    newNode->set_next(head); 
    head = newNode; 
}

void List::insertAfter(int oldV, int newV) {
    node* temp = head;
    while (temp != NULL && temp->get_val() != oldV) {
        temp = temp->get_next(); 
    }

    if (temp != NULL) { 
        node* newNode = new node();
        newNode->set_val(newV);
        newNode->set_next(temp->get_next()); 
        temp->set_next(newNode); 
    }
    else {
        insert_end(newV); 
    }
}

void List::deleteNode(int value) {
    if (head == NULL) return;  

    if (head->get_val() == value) {
        node* temp = head;
        head = head->get_next();  
        delete temp; 
        return;
    }

    node* temp = head;
    while (temp->get_next() != NULL && temp->get_next()->get_val() != value) {
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
        cout << temp->get_val() << " -> ";
        temp = temp->get_next();
    }
    cout << "NULL" << endl; 
}
