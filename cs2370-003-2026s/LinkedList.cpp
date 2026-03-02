//
//  LinkedList.cpp
//  cs2370-003-2026s
//
//  Created by Rita Kuo on 3/2/26.
//
#include <iostream>
#include "LinkedListNode.h"
using namespace std;

class LinkedList {
public:
    LinkedList() : head(nullptr) {}
    ~LinkedList();
    void Prepend(int data);
    void Print() const;
private:
    LinkedListNode *head;
};

LinkedList::~LinkedList() {
    LinkedListNode *next = nullptr;
    while (head != nullptr) {
        next = head->next;
        delete head;
        head = next;
    }
}

void LinkedList::Prepend(int data) {
    LinkedListNode *newNode = new LinkedListNode(data);
                     //this->head
    (*newNode).next = head;
    newNode->next = head;
    head = newNode;
}

void LinkedList::Print() const {
    if (head == nullptr) {
        cout << "Empty List" << endl;
    } else {
        LinkedListNode *node = head;
        for (; node != nullptr; node = node->next) {
            cout << node->data << " ";
        }
        cout << endl;
    }
}

int main() {
    LinkedList list;
    list.Prepend(1);
    list.Prepend(2);
    list.Prepend(3);
    list.Prepend(4);
    
    list.Print();
    return 0;
}
