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
    LinkedList(const LinkedList &obj);
    LinkedList& operator=(const LinkedList &obj);
    ~LinkedList();
    LinkedListNode* GetHead() {return head;}
    void Prepend(int data);
    void Print() const;
private:
    LinkedListNode *head;
};

LinkedList& LinkedList::operator=(const LinkedList &obj) {
  // delete old list
  if (head != nullptr) {
    LinkedListNode *current = head;
    LinkedListNode *next;
    
    while(current != nullptr) {
      next = current->next;
      delete current;
      current = next;
    }
  }
  // copy list from the operand
  if (obj.head == nullptr) {
    this->head = nullptr;
  } else {
    head = new LinkedListNode(obj.head->data);
    
    LinkedListNode *currentThis = head;
    LinkedListNode *currentObj = obj.head;
    while (currentObj->next != nullptr) {
      currentThis->next = new LinkedListNode(currentObj->next->data);
      currentObj = currentObj->next;
      currentThis = currentThis->next;
    }
  }
  return *this;
}

LinkedList::LinkedList(const LinkedList &obj) {
  if (obj.head == nullptr) {
    this->head = nullptr;
  } else {
    head = new LinkedListNode(obj.head->data);
    
    LinkedListNode *currentThis = head;
    LinkedListNode *currentObj = obj.head;
    while (currentObj->next != nullptr) {
      currentThis->next = new LinkedListNode(currentObj->next->data);
      currentObj = currentObj->next;
      currentThis = currentThis->next;
    }
  }
}


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
    // Memory Leak occurred when using new operators
    
    //LinkedListNode node(1);
    //cout << node.GetData() << endl;
    //LinkedListNode *node = new LinkedListNode(1);
    //cout << node->GetData() << endl;
    //LinkedListNode nodes[4];
    
    // Copy Constructor
    
    //LinkedListNode n1(1);
    //cout << n1.GetData() << endl;
    //LinkedListNode n2(n1);
    //cout << n2.GetData() << endl;
    //cout << "====== updating n1 ======" << endl;
    //n1.SetData(100);
    //cout << n1.GetData() << endl;
    //cout << n2.GetData() << endl;
    
    
    LinkedList list;
    list.Prepend(1);
    list.Prepend(2);
    list.Prepend(3);
    list.Prepend(4);
    
    list.Print();
    
    // Copy Constructor in Linked List
    
    //LinkedList l2(list);
    //l2.Print();

    //LinkedListNode *listHead = list.GetHead();
    //listHead->SetData(100);
    //cout << "===== updating l1 ======" << endl;
    //list.Print();
    //l2.Print();
    
    // Copy Assignment Operator Overloading
    
    //LinkedListNode n1(1);
    //LinkedListNode n2(2);
    //n2 = n1;
    
    // Copy Assignment Operator in Linked List
    
    LinkedList l3;
    l3.Prepend(1000); l3.Prepend(2000);
    l3 = list;
    l3.Print();
    cout << "==== updating l3 ====" << endl;
    LinkedListNode *listHead = list.GetHead();
    listHead->SetData(100);
    list.Print();
    l3.Print();
    
    
    
    return 0;
}
