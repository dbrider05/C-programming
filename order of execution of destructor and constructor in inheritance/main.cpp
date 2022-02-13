#include <iostream>
#include <string>

using namespace std;

class Person{
public:
    Person(){
        cout << "constructor is called of Person class" << endl;
    }
    ~Person(){
        cout << "destructor is called of Person class" << endl;
    }
};

class Student : public Person{
public:
    Student(){
        cout << "constructor is called of Student class" << endl;
    }
    ~Student(){
        cout << "destructor is called of Student class" << endl;
    }
};
int main()
{
    Student abdul;

    return 0;
}
