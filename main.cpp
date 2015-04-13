// Carrie Hadley
// April 13

#include "varArray.h"
#include <iostream>

using std::cout; using std::cin; using std::endl;

int main() {
    int size= 0;
    int *a = new int[size];
    char choice;
    int number;
    
    while (choice != 'q') {
        cout << "enter operation [a/r/q] and number: ";
        cin >> choice >> number;
            if (choice == 'a'){ // Adding a number
                addNumber(a, number, size);
            }
            else if (choice == 'r'){ // Removing a number
                removeNumber(a, number, size);
            }
        cout << "your numbers: "; // Printing numbers
        output(a, size);
        cout << endl;
    }

    }
    

