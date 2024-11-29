#include <iostream>
#include <string>

using namespace std;
int main()
{
    int age = 25;
    float height = 25.0;
    char initial = 'A';
    string name = "Arnav";
    bool is_active = false; //boolean true/false
    const int max_age = 100; //max age will remain the same

    cout << "Age: " << age << endl;
    cout << "Height: " << height << endl;
    cout << "Initial: " << initial << endl;
    cout << "Name: " << name << endl;
    cout << "is active?: " << is_active << endl;
    cout << "is active?: " << (is_active ? "yes" : "no") << endl;
    cout << "Max Age: " << max_age << endl;
    return 0;
}