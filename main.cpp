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
            if (choice == 'a'){
                addNumber(a, number, size);
            }
            else if (choice == 'r'){
                removeNumber(a, number, size);
            }
        cout << "your numbers: ";
        output(a, size);
        cout << endl;
    }

    }
    

