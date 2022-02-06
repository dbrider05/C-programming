#include <iostream>
#include <string>

using namespace std;

class Person{
public:
    string name;
    int age;
    void display(){};
};

class Student:public Person{
public:
    int id;
    void introduce(){
        cout << "My name is " << name << ". I am " << age << " years old. My student ID is " << id << endl;
    }
};
int main()
{
    Student abdul;
    abdul.name = "abdul";
    abdul.age = 23;
    abdul.id = 2005;
    abdul.introduce();
    return 0;
}
