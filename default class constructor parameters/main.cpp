#include <iostream>
#include <string>

using namespace std;

class Human {
private:
    string name;
    int age;
public:
    Human(){
        name = "None";
        age = 0;
    }
    Human(string iname = "none", int iage=0){
        name = iname;
        age = iage;
    }
    void display() {
        cout << name << endl << age << endl;
    }
};
int main()
{
    //cout << "Hello world!" << endl;
    //Human abdul;              // ambigous call
    Human abdul("amaan");
    abdul.display();
    return 0;
}
