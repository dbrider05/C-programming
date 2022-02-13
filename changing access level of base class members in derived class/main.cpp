#include <iostream>
#include <string>

using namespace std;

class Human{
protected:
    string name;
    void setname(string iname){
        name = iname;
    }
};

class Student : private Human{
public:
    Human :: name;
    Human :: setname;
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
    //abdul.name = "abdul";
    abdul.setname("abdul");
    abdul.display();
    return 0;
}
