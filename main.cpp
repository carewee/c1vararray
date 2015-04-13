// Carrie Hadley
// April 13

#include "varArray.h"
#include <iostream>

using std::cout; using std::cin; using std::endl;

int main() {
    /* Create a project titled Lab10_VarArray. Write a program that allows the user to add or remove an integer number to a collection of integers and then prints all of them. A user may enter the number twice in which case, the repeated number should not be entered.
    Here is an example program dialog:
    
    enter operation [a/r/q] and number: a 5
    your numbers: 5
    enter operation [a/r/q] and number: a 8
    your numbers: 5 8
    enter operation [a/r/q] and number: a 8
    your numbers: 5 8
    enter operation [a/r/q] and number: r 8
    your numbers: 5
    enter operation [a/r/q] and number: a 3
    your numbers: 5 3
    enter operation [a/r/q] and number: a 12
    your numbers: 5 3 12
    enter operation [a/r/q] and number: q
    The size of the user input can be arbitrarily large. For this program, to accommodate user input, you need to implement an integer array whose size varies as necessary. The numbers in the array should not be sorted.
     */

    
    int size= 0;
    int *a = new int[size];
    char choice;
    int number;
    
    while (choice != 'q') {
        cout << "enter operation [a/r/q] and number: ";
        cin >> choice >> number;
        int i = check(a, number, size);
        
        // when the number is not already in the array
        while (i != -1) {
            if (choice == 'a')
                addNumber(a, number, size);
            else if (choice == 'r')
                removeNumber(a, number, size);
        }
        cout << "your numbers: ";
        output(a, size);
        cout << endl;
    }
    
}
