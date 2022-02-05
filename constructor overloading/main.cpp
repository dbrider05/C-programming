#include <iostream>
#include <string>

using namespace std;

class Human {
private:
    string name;
    int age;
public:
    Human(){                                    // if I remove default constructor then I cannot create an object without any parameters as cpp does not provide default constructor when we have parametrized constructor
        cout << "default constructor"<< endl;
        name = "None";
        age = 0;
    }
    Human(string iname, int iage) {
        name = iname;
        age = iage;
    }
    Human(string iname){
        name = iname;
        age = 0;
    }
    Human(int iage){
        age = iage;
        name = "None";
    }
    void display(){
        cout << name << endl << age << endl;
    }

};

int main()
{
    //cout << "Hello world!" << endl;
    Human abdul;
    abdul.display();

    Human amaan("amaan");
    amaan.display();

    Human shifudons(23);
    shifudons.display();

    Human ayesha("ayesha", 7);
    ayesha.display();
    return 0;
}
