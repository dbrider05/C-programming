#include <iostream>
#include <string>

using namespace std;

class Human {
public:
    string name = "None";
    void introduce();
};

void Human :: introduce(){

    cout << "Hola! mi llamo " << Human :: name << "." << endl; // name member is accessible here without using class name
    // We cannot initalize variable outside the class using scope resolution operator. It is only possible when member of a class is static
}

int main()
{
    Human abdul = {"Abdul"};
    abdul.introduce();
    return 0;
}
