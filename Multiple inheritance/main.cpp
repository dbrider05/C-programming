#include <iostream>
#include <string>

using namespace std;

class Father{
public:
    int height;
    void askFather(){
        cout << "I'm your father, ask me what do you want." << endl;
    }
};

class Mother{
public:
    string skincolour;
    void askMother(){
        cout << "I'm your Mother, ask me what do you want." << endl;
    }
};

class Child:public Father,public Mother{
public:
    void setHeightAndColour(string colour, int iheight){
        skincolour = colour;
        height = iheight;
    }
    void display(){
        cout << "I have a height of "<<height<<" inches and " << skincolour << " skincolour."<<endl;
    }
};

int main()
{
    Child abdul;
    abdul.setHeightAndColour("Fair",6);
    abdul.display();
    abdul.askFather();
    abdul.askMother();
    return 0;
}
