#include <iostream>
using namespace std;
//Logical Operators

int main() {
    bool a = 1 , b = 0;

    // AND operator (returns true if both operands are true)
    cout << "a AND b = " << (a && b) << endl;

    // OR operator (returns true if either of the operands is true)
    cout << "a OR b = " << (a || b) << endl;

    // NOT operator (returns true if operand is false)
    cout << "NOT a = " << (!a) << endl;

    // XOR operator (returns true if exactly one of the operands is true)
    cout << "a XOR b = " << (a ^ b) << endl;

    // Left shift operator (moves the bits of the number to the left by the specified number of places)
    cout << "a << 1 = " << (a << 1) << endl;

    // Right shift operator (moves the bits of the number to the right by the specified number of places)
    cout << "a >> 1 = " << (a >> 1) << endl;
    
    return 0;
}