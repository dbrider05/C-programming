#include <iostream>
#include <string>

using namespace std;

class Human{
protected:
    string name;
public:
    void setname(string iname){
        name = iname;
    }
};

class Student : public Human{   // in public inheritance, all public members are public in subclass, all protected members are protected but private members are not accessible
public:
    void display(){
        cout << name << endl;
    }
} ;

int main()
{
    Student abdul;
    abdul.setname("abdul");
    abdul.display();
    return 0;
}
