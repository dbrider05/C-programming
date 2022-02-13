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

class Student : protected Human{ // all public members and protected members are protected members in subclass
public:
    void display(){
        cout << name << endl;
    }
    void setStudentName(string iname){
        setname(iname);
    }
} ;

int main()
{
    Student abdul;
    //abdul.setname("abdul");
    abdul.setStudentName("abdul");
    abdul.display();
    return 0;
}
