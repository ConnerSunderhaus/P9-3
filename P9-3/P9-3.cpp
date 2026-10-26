// P9-3.cpp, Conner Sunderhaus, 10/26/26   
// this program taks a string input and counts it as if it were roman numerals

#include <iostream>
#include <string>

using namespace std;

int romanCharValue(char r);

int main() {
    string input;

    // Loot for acquiring testing data
    while (true) {
        cout << "Enter Roman number or Q to quit: ";
        cin >> input;

        // Check for the quit condition
        if (input == "Q") {
            break;
        }
    }
}

// Function to return the numeric value of a Roman numeral character
int romanCharValue(char r) {
    // Checking explicitly for both uppercase and lowercase letters
    // using switch becasue only checking one character
    switch (r) {
    case 'I': case 'i': return 1;
    case 'V': case 'v': return 5;
    case 'X': case 'x': return 10;
    case 'L': case 'l': return 50;
    case 'C': case 'c': return 100;
    case 'D': case 'd': return 500;
    case 'M': case 'm': return 1000;
    default: return 0; // Return 0 for invalid characters
    }
}
