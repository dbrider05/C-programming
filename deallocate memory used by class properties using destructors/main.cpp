#include <iostream>
#include <string>

using namespace std;

class Human{
private:
    string *name;
    int *age;
public:
    Human(string iname, int iage){
        name = new string;
        age = new int;

        *name = iname;
        *age = iage;
    }
    void display(){
        cout << *name << " " << *age << endl;
    }
    ~Human(){
        cout << "All allocated memory is deallocated" << endl;
    }
};

int main()
{
    //cout << "Hello world!" << endl;
    Human *abdul=new Human("abdul",24);
    abdul->display();
    delete abdul;
    return 0;
}
