#include <iostream>
#include <string>

using namespace std;

class Human {
public:
    string name;
    void introduce(){
        cout << "My name is " << name << "." << endl;
    }
};

int main()
{
    Human abdul; //object created is stored in a stack;

    Human *amaan = new Human(); // object is created dynamically and stored in a heap

    abdul.name = "Abdul";
    abdul.introduce();

    amaan -> name = "Amaan";
    amaan -> introduce();

    return 0;
}
