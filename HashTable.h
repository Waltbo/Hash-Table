/*
 * Author: Walter Smith
 * Date: 4/22/2018
 * Assignment: Program 5- BinarySearchTrees
 * File: HashTable.h
 * Description: Header for hashtable
 */

#ifndef SPRING_2018_PROGRAM_6_HASH_TABLE_WALTBO_HASHTABLE_H
#define SPRING_2018_PROGRAM_6_HASH_TABLE_WALTBO_HASHTABLE_H


#include "LinkedList.h"

class hashtable {

public:
    hashtable(int size);//Allocate space for the hash tables based on the
    void setSize(int size);//parameter size.  Set the size and the count.
    void Insert(int value);    //insert the value in the hash table
    void display();    //Display the content of the hash table1.

private:
    LinkedList *table;    //hash table is an array of linkedlists
    int count;    //number of values stored in the hash table
    int size; //size of the hash table
};

#endif //SPRING_2018_PROGRAM_6_HASH_TABLE_WALTBO_HASHTABLE_H