#include <iostream>
#include <string>

using namespace std;

struct student {
    string name;
    int rollno;
};

int main()
{
    student abdul = {"abdul", 5};
    student *abdulptr;
    abdulptr = &abdul;
    abdulptr -> name = "amaan";
    cout << abdulptr->name << " " << abdulptr->rollno << endl;
    return 0;
}
