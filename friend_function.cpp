#include <iostream>
using namespace std;

class Box
{
private:
    double width;

public:
    Box(double w) : width(w) {}
    friend void printwidth(Box box); // friend function
};
void printwidth(Box box)
{
    cout << "Width of box : " << box.width << endl;
}

int main()
{
    Box box(5);
    printwidth(box);
    return 0;
}