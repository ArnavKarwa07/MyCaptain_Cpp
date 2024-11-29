#include <iostream>
using namespace std;

class Example
{
    public:
    int publicvariable;
    void publicMethod()
    {
        cout<<"Public Method"<<endl;
    }

    private://default access specifier if no other specified
    int privatevariable;
    void privateMethod()
    {
        cout<<"Private Method"<<endl;
    }

    protected:
    int protectedvariable;
    void protectedMethod()
    {
        cout<<"Protected Method"<<endl;
    }
    public:
    Example(): publicvariable(1),protectedvariable(2),privatevariable(3){}//default constructor,the way compiler sees it, IN THE SAME ORDER

    void showaccess()
    {
        cout<<"Public Variable: "<<publicvariable<<endl;
        cout<<"Protected Variable: "<<protectedvariable<<endl;
        cout<<"Private Variable: "<<privatevariable<<endl;
    }
};

int main()
{
    cout<<"Example"<<endl;
    Example obj;
    obj.showaccess();
}