#include <iostream>
using namespace std;
class Animal
{
public:
    virtual void sound() // overrided class
    {
        cout << "Animal makes a sound." << endl;
    }
};

class Dog : public Animal // inherited Animal
{
public:
    void sound() override // overriding sound() from Animal
    {
        cout << "Dog barks." << endl;
    }
};
class Cat : public Animal
{
public:
    void sound() override
    {
        cout << "Cat meows." << endl;
    }
};
int main()
{
    Animal *animal1 = new Dog(); // allocate space
    Animal *animal2 = new Cat();

    animal1->sound(); //-> tends to sound
    animal2->sound();

    delete animal1; // to free memory allocated by Animal constructor
    delete animal2;
    return 0;
}
