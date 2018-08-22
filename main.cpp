/*
 * Author: Walter Smith
 * Date: 4/22/2018
 * Assignment: Program 5- BinarySearchTrees
 * File: main.cpp
 * Description: Lets user create the hash table and do functions
 */
#include <iostream>
#include "HashTable.h"

using namespace std;

int main() {

    cout << "Enter size of your hash table" << endl;
    int k;

    while (!(cin >> k)) {
        cout << "Please only insert a number or reduce the size" << endl;
        cin.clear();
        cin.ignore(999999999999, '\n');

    }
    hashtable Table(k);
    string j = "";
    while (j != "4") {
        cout << "1. Insert" << "\n" << "2. Display" << "\n" << "3. Exit" << endl;
        cin >> j;
        if (j == "1") {
            cout << "Enter a number" << endl;
            int k;

            while (!(cin >> k)) {
                cout << "Please only insert a number or make the number smaller" << endl;
                cin.clear();
                cin.ignore(999999999999, '\n');

            }
            Table.Insert(k);
        } else if (j == "2") {

            Table.display();
        } else if (j == "3") {
            cout << "Goodbye" << endl;
            break;
        } else {
            cout << "Wrong input" << endl;
        }
    }


}

