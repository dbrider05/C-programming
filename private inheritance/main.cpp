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

class Student : private Human{ //in private inheritance, all members become as a private member in that subclass and cant be accessible to its further subclasses
public:
    void display(){
        cout << name << endl;
    }
    void setStudentName(string iname){
        setname(iname);
    }
} ;

class Gstudent : public Student{
public:

};

int main()
{
    Gstudent abdul;
    //abdul.setname("abdul");
    abdul.setStudentName("abdul");
    abdul.display();
    return 0;
}
