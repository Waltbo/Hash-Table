/*
 * Author: Walter Smith
 * Date: 4/22/2018
 * Assignment: Program 5- BinarySearchTrees
 * File: LinkedList.h
 * Description: Header for linked list
 */

#ifndef SPRING_2018_PROGRAM_6_HASH_TABLE_WALTBO_LINKEDLIST_H
#define SPRING_2018_PROGRAM_6_HASH_TABLE_WALTBO_LINKEDLIST_H


//file: LinkedList.h
#include<string>
#include<iostream>

using namespace std;
typedef string ElementType;

struct Node {
    int data;
    int counter;
    Node *next;
};

class LinkedList {
public:
    LinkedList(); // Create an empty LinkedList
    bool isEmpty(); // Return true if the LinkedList is empty, otherwise return false
    void InsertAtEnd(int x); // Insert a value x at the end of the LinkedList
    void Display(); //displays values in linked list
    void Sort(); // Sort the LinkedList of strings based on length (shortest to longest)
    void SortCheck();//loops sort again incase first is still bigger than next

private:

    Node *first; // Pointer to first Node of LinkedList
};

#endif //SPRING_2018_PROGRAM_6_HASH_TABLE_WALTBO_LINKEDLIST_H