/*
 * Author: Walter Smith
 * Date: 4/22/2018
 * Assignment: Program 5- BinarySearchTrees
 * File: LinkedList.cpp
 * Description: Creates linked list that inserts and sorts
 */
#include "LinkedList.h"

using namespace std;
typedef string ElementType;

LinkedList::LinkedList() {
    first = NULL;
}

bool LinkedList::isEmpty() {
    bool emptyCheck = false;
    if (first == NULL) {
        emptyCheck = true;
    }
    return emptyCheck;
}

void LinkedList::InsertAtEnd(int x) {

    Node *q = new Node;
    q->data = x; //sets nodes data to users input
    q->counter = 1;
    Node *p = new Node; //node to move through list
    q->next = NULL;
    p = first;
    if (isEmpty() == true) {
        first = q;
    } else {
        while (p->next != NULL) {//traverses through the list
            if (x == p->data) {
                p->counter++;
                return;
            } else {
                p = p->next;
            }
        }
        if (x == p->data) {
            p->counter++;
            return;
        } else {
            p->next = q; //since p stopped at the last part in the list, puts the next to q
        }
    }
}

void LinkedList::Display() {
    Node *q = new Node;
    q = first;
    if (isEmpty() == true) {
        cout << "";
    } else {
        while (q != NULL) {

            cout << q->data << "-" << q->counter << ", ";
            q = q->next;

        }
    }
}

void LinkedList::Sort() {
    if (isEmpty() == false && first->next != NULL) {
        Node *q = new Node();
        q = first;
        int holdOne = q->data;
        int holdTwo = q->next->data;
        while (q->next != NULL) {
            if (holdOne > holdTwo) {//if length of string is longer than the next one, swap the two
                q->data = holdTwo;
                q->next->data = holdOne;
            }
            q = q->next;
            holdOne = q->data;
            if (q->next != NULL) {
                holdTwo = q->next->data;
            }
        }
        SortCheck(); //Checks and sees if first is
    }
}

void LinkedList::SortCheck() {//loops sort again incase first is still bigger than next

    if (first->data > first->next->data) {
        Sort();
    }
}