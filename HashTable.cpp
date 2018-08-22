/*
 * Author: Walter Smith
 * Date: 4/22/2018
 * Assignment: Program 5- BinarySearchTrees
 * File: HashTable.cpp
 * Description: Creates a HashTable of linked lists. Allows for chain insert.
 */
#include "HashTable.h"

hashtable::hashtable(int size) {
    setSize(size);
}

void hashtable::setSize(int size) {
    this->size = size;
    table = new LinkedList[size];
}

void hashtable::Insert(int value) {
    int hashFunction = value % size;//makes location by getting remainder
    table[hashFunction].InsertAtEnd(value);//at location, insert at the end of the linked list10
}

void hashtable::display() {
    for (int i = 0; i < size; i++) {
        cout << i << " - ";
        table[i].Sort();
        table[i].Display();
        cout << endl;
    }
}
