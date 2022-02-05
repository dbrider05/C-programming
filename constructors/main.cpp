#include <iostream>
#include <string>

using namespace std;

class Human {
    string name;
    int age;
public:

    Human();
    void display() {
        cout << name << endl << age << endl;
    }
};

Human :: Human() {
       // Human() {
        name = "None";
        age = 0;
        cout << "constructor is automatically called when the constructor is created." << endl;
    //}
}

int main()
{
    //cout << "Hello world!" << endl;
    Human abdul;
    abdul.display();

    return 0;
}
