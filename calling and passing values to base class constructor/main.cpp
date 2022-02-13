#include <iostream>
#include <string>

using namespace std;

class Father{
protected:
    int height;
public:
    Father(int h){
        cout << "constructor of Father is called" << endl;
        height = h;
    }
};

class Mother{
protected:
    string skincolor;
public:
    Mother(string s){
        cout << "constructor of Mother is called" << endl;
        skincolor = s;
    }
};

class Child : public Father,public Mother{
public:
    Child(int x,string s):Father(x),Mother(s){
        cout << "costructor of Child is called" << endl;
    }
    void display(){
        cout << "Height is " << " " << height << " and color is " << skincolor;
    }
};

int main()
{
    Child abdul(24, "Fair");
    abdul.display();
    return 0;
}
