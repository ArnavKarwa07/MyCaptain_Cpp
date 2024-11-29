#include <iostream>
using namespace std; // Allows us to use the standard namespace, avoiding the need for the 'std::' prefix

// Class to represent complex numbers
class Complex
{
private:
    double real; // Private member variable to store the real part of the complex number
    double imag; // Private member variable to store the imaginary part of the complex number

public:
    // Constructor to initialize the complex number
    Complex(double r = 0.0, double i = 0.0) : real(r), imag(i) {}

    // Overloading the + operator
    Complex operator+(const Complex &other) const
    {
        return Complex(real + other.real, imag + other.imag);
    }

    // Overloading the - operator
    Complex operator-(const Complex &other) const
    {
        return Complex(real - other.real, imag - other.imag);
    }

    // Overloading the * operator
    Complex operator*(const Complex &other) const
    {
        return Complex(real * other.real - imag * other.imag, real * other.imag + imag * other.real);
    }

    // Overloading the / operator
    Complex operator/(const Complex &other) const
    {
        double denominator = other.real * other.real + other.imag * other.imag;
        return Complex((real * other.real + imag * other.imag) / denominator,
                       (imag * other.real - real * other.imag) / denominator);
    }

    // Overloading the == operator
    bool operator==(const Complex &other) const
    {
        return (real == other.real) && (imag == other.imag);
    }

    // Overloading the != operator
    bool operator!=(const Complex &other) const
    {
        return !(*this == other);
    }

    // Overloading the = operator
    Complex &operator=(const Complex &other)
    {
        if (this != &other)
        {
            real = other.real;
            imag = other.imag;
        }
        return *this;
    }

    // Overloading the ++ (prefix) operator
    Complex &operator++()
    {
        ++real;
        ++imag;
        return *this;
    }

    // Overloading the ++ (postfix) operator
    Complex operator++(int)
    {
        Complex temp = *this;
        ++(*this);
        return temp;
    }

    // Overloading the << operator for output
    friend ostream &operator<<(ostream &os, const Complex &c)
    {
        os << c.real << " + " << c.imag << "i";
        return os;
    }

    // Overloading the >> operator for input
    friend istream &operator>>(istream &is, Complex &c)
    {
        cout << "Enter real part: ";
        is >> c.real;
        cout << "Enter imaginary part: ";
        is >> c.imag;
        return is;
    }
};

int main()
{
    Complex c1(3.0, 4.0); // Create a Complex object with real part 3.0 and imaginary part 4.0
    Complex c2(1.0, 2.0); // Create another Complex object with real part 1.0 and imaginary part 2.0
    Complex c3;           // Create a Complex object with default values (0.0, 0.0)

    Complex sum = c1 + c2;  // Use the overloaded + operator to add two complex numbers
    Complex diff = c1 - c2; // Use the overloaded - operator to subtract two complex numbers
    Complex prod = c1 * c2; // Use the overloaded * operator to multiply two complex numbers
    Complex quot = c1 / c2; // Use the overloaded / operator to divide two complex numbers

    bool isEqual = (c1 == c2);    // Use the overloaded == operator to compare two complex numbers
    bool isNotEqual = (c1 != c2); // Use the overloaded != operator to compare two complex numbers

    c3 = c1; // Use the overloaded = operator to assign one complex number to another

    ++c1; // Use the overloaded prefix ++ operator to increment a complex number
    c2++; // Use the overloaded postfix ++ operator to increment a complex number

    cout << "c1: " << c1 << endl; // Use the overloaded << operator to output the first complex number
    cout << "c2: " << c2 << endl; // Use the overloaded << operator to output the second complex number
    cout << "c3: " << c3 << endl; // Use the overloaded << operator to output the third complex number

    cout << "Sum: " << sum << endl;         // Use the overloaded << operator to output the sum of the complex numbers
    cout << "Difference: " << diff << endl; // Use the overloaded << operator to output the difference of the complex numbers
    cout << "Product: " << prod << endl;    // Use the overloaded << operator to output the product of the complex numbers
    cout << "Quotient: " << quot << endl;   // Use the overloaded << operator to output the quotient of the complex numbers

    cout << "c1 and c2 are " << (isEqual ? "equal" : "not equal") << endl;    // Output whether c1 and c2 are equal
    cout << "c1 and c2 are " << (isNotEqual ? "not equal" : "equal") << endl; // Output whether c1 and c2 are not equal

    Complex c4;
    cout << "Enter a complex number (real and imaginary parts): " << endl;
    cin >> c4;                             // Use the overloaded >> operator to input a complex number
    cout << "You entered: " << c4 << endl; // Output the entered complex number

    return 0; // Return 0, indicating that the program ended successfully
}