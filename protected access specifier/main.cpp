#include <iostream>
#include <string>

using namespace std;

class Human{
protected:   // just like private but have additional benefits like the member functions and variables are also accessible in all its subclasses
    string name;
public:
    void setname(string iname){
        name = iname;
    }
};

class Student : public Human{
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
