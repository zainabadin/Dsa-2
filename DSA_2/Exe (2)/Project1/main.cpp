#include "List.h"
#include <iostream>
using namespace std;

void searchStudentByID(List& studentList, int id) {
    node* temp = studentList.get_head();  
    while (temp != NULL) {
        if (temp->get_studentID() == id) {
            cout << "Student found: " << temp->get_studentName() << endl;
            return;
        }
        temp = temp->get_next();
    }
    cout << "Student with ID " << id << " not found." << endl;
}

int main() {
    List studentList;

    studentList.insert_end(01, "Azmat");
    studentList.insert_end(02, "Babar");
    studentList.insert_end(03, "Davis");

    studentList.traverse();

    studentList.insert_begin(00, "Parizaad");
    studentList.traverse();

    searchStudentByID(studentList, 02);
    searchStudentByID(studentList, 05);

    studentList.deleteNode(01);
    studentList.traverse();

    return 0;
}
