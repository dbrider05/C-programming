#include <iostream>

using namespace std;

void display();

class Human{
public:
    static int human_count;
    Human(){
        human_count++;
    }
    void humanTotal(){
        cout << "There are " << human_count  << " people in the class";
    }

};

int Human::human_count = 0;

int main()
{
    //cout << "Hello world!" << endl;
//    display();
//    display();
    Human abdul;
    Human amaan;
    Human shifudons;
    Human helloDB;
    abdul.humanTotal();

    return 0;
}

//void display(){
//    static int count = 0;
//    cout << ++count << endl;
//}
