#include <iostream>
using namespace std;
int add(int a, int b)
    {
        return a + b;
    }

int sub(int a, int b)
    {
        return a - b;
    }

int multiply(int a, int b)
    {
        return a * b;
    }
    
float divide(int a, int b)
{
    if (b == 0)
    {
        cout << "Error! Division by zero";
        return 0;
    }
    else
        return (float)a / b;
}
int main()
{
    int choice , a , b;
    cout << "enter 2 nos" << endl;
    cin >>a>>b;
    cout << "pick an operator \n1.ADD \n 2.SUB \n 3.MULTIPLY \n 4.DIVIDE \n 5.QUIT" << endl;
    cin >> choice;
    switch (choice) 
    {
    case 1:
        cout << "The addition is:" <<add(a,b)<< endl;
        break;
    case 2:
        cout << "The subtraction is:" <<sub(a,b) << endl;
        break;
    case 3:
        cout << "The multiplication is:"<<multiply(a,b) << endl;
        break;
    case 4:
        cout << "The division is:"<<divide(a,b) << endl;
        break;
    case 5:
        exit(0);
        break;
    default: cout << "Invalid" << endl;
        break;
    }
    return 0;
}

