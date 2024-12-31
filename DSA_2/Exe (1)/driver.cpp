#include "List.h"
#include <iostream>
using namespace std;

int main() {
    cout << "Creating a new List." << endl;
    List myList;

    cout << "Inserting 10 at the end of the list." << endl;
    myList.insert_end(10);

    cout << "Inserting 20 at the end of the list." << endl;
    myList.insert_end(20);

    cout << "Inserting 30 at the end of the list." << endl;
    myList.insert_end(30);

    cout << "Traversing the list." << endl;
    myList.traverse();

    cout << "Inserting 5 at the beginning of the list." << endl;
    myList.insert_begin(5);

    cout << "Traversing the list." << endl;
    myList.traverse();

    cout << "Inserting 25 after 20 in the list." << endl;
    myList.insertAfter(20, 25);

    cout << "Traversing the list." << endl;
    myList.traverse();

    cout << "Deleting node with value 10 from the list." << endl;
    myList.deleteNode(10);

    cout << "Traversing the list." << endl;
    myList.traverse();

    return 0;
}
