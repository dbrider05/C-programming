#include <iostream>

using namespace std;

class Human{
public:
    Human(){
        cout << "constructor called" << endl;
    }
    ~Human(){
        cout << "destructor called" << endl;
    }
};


int main()
{
    //cout << "Hello world!" << endl;
    Human *abdul = new Human();
 //  Human abdul;//both constructor and destructor is called
    delete abdul;
    return 0;
}
