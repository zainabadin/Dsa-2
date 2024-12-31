#include "List.h"
#include <iostream>
using namespace std;

int findMaxValue(node* head) {
    if (head == nullptr) return -1;

    int maxVal = head->get_studentID();
    node* temp = head->get_next();

    while (temp != nullptr) {
        if (temp->get_studentID() > maxVal) {
            maxVal = temp->get_studentID();
        }
        temp = temp->get_next();
    }
    return maxVal;
}

int countNodes(node* head) {
    int count = 0;
    node* temp = head;
    while (temp != nullptr) {
        count++;
        temp = temp->get_next();
    }
    return count;
}

void printEvenNumberedNodes(node* head) {
    int index = 1;
    node* temp = head;
    while (temp != nullptr) {
        if (index % 2 == 0) {
            cout << "ID: " << temp->get_studentID() << ", Name: " << temp->get_studentName() << endl;
        }
        temp = temp->get_next();
        index++;
    }
}

void splitAndSwap(node*& head) {
    int nodeCount = countNodes(head);
    if (nodeCount < 2) return;

    int mid = nodeCount / 2;
    node* prev = nullptr;
    node* temp = head;

    for (int i = 0; i < mid; i++) {
        prev = temp;
        temp = temp->get_next();
    }

    node* secondHalf = temp;
    prev->set_next(nullptr);

    node* firstHalf = head;
    node* tempSecondHalf = secondHalf;

    while (tempSecondHalf->get_next() != nullptr) {
        tempSecondHalf = tempSecondHalf->get_next();
    }

    tempSecondHalf->set_next(firstHalf);
    head = secondHalf;
}

int main() {
    List studentList;

    studentList.insert_end(1, "Alice");
    studentList.insert_end(2, "Bob");
    studentList.insert_end(3, "Charlie");
    studentList.insert_end(4, "David");
    studentList.insert_end(5, "Eve");
    studentList.insert_end(6, "Frank");

    cout << "Initial List: " << endl;
    studentList.traverse();

    int maxVal = findMaxValue(studentList.get_head());
    cout << "Maximum value in the list: " << maxVal << endl;

    int totalNodes = countNodes(studentList.get_head());
    cout << "Total number of nodes: " << totalNodes << endl;

    cout << "Even-numbered nodes: " << endl;
    printEvenNumberedNodes(studentList.get_head());

    splitAndSwap(studentList.get_head());
    cout << "List after splitting and swapping halves: " << endl;
    studentList.traverse();

    return 0;
}
