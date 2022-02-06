#include <iostream>
#include <string>

using namespace std;

class Human{
public:
    static int human_count;
    Human(){
        human_count++;
    }
    void humanTotal(){
        cout << "There are " << human_count  << " people in the class";
    }
    static void humanCount(){
        cout << "There are " << human_count  << " people in the class"; // only static members can be used in static member function
    }

};

int Human::human_count = 0;

int main()
{
    Human abdul;
    Human amaan;
    Human shifudons;
    Human helloDB;
    Human::humanCount();
    //abdul.humanCount();
    return 0;
}
