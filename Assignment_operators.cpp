#include <iostream>
using namespace std;
//Assignment operators

int main() {
    int a = 10;
    int b = 20;

    // Assignment operator
    a = b;  // a = 20

    // Compound assignment operators
    a += b;  // a = a + b = 20 + 20 = 40
    a -= b;  // a = a - b = 40 - 20 = 20
    a *= b;  // a = a * b = 20 * 20 = 400
    a /= b;  // a = a / b = 400 / 20 = 20
    a %= b;  // a = a % b = 20 % 20 = 0

    // Increment and decrement operators
    a++;  // a = 20 + 1 = 21
    ++a;
return 0;
}