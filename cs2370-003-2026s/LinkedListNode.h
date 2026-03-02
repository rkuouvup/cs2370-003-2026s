//
//  LinkedListNode.h
//  cs2370-003-2026s
//
//  Created by Rita Kuo on 3/2/26.
//

#ifndef LINKEDLISTNODE_H
#define LINKEDLISTNODE_H

#include <iostream>
using namespace std;

class LinkedListNode {
    friend class LinkedList;
public:
    LinkedListNode(int data = 0) : data(data), next(nullptr) {}
    int GetData() const {return data;}
private:
    int data;
    LinkedListNode *next;
};

#endif
