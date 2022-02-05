#include <iostream>

using namespace std;

struct student {
    int rollno;
    char sex;
};

int main()
{
    int age;
    cout << "int --> " << sizeof(int) << endl;
    cout << "age --> " << sizeof(age) << endl;
    student abdul;
    cout << "student --> " << sizeof(student) << endl;
    return 0;
}
