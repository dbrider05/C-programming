#include <iostream>

using namespace std;

class Human {
//private:
    int age;
    int newAge() {
        return age -= 5;
    }
public:
    void getAge() {
        cout << newAge() << endl;
    }
    void setAge(int value) {
        age = value;
    }
};

int main()
{
    // cout << "Hello world!" << endl;
    Human abdul;
    abdul.setAge(40);
    abdul.getAge();
    return 0;
}
