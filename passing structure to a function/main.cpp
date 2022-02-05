#include <iostream>
#include<string>

using namespace std;

struct student {
    string name;
    int rollno;
};

void display(student s) {
    cout << s.name << endl;
    cout << s.rollno << endl;
    s.name = "hello db";
}

void show(student *s){
    cout << s->name << endl << s->rollno << endl;
    s->name = "shifudons";
}

int main()
{
    student abdul = {"abdul", 5};
    display(abdul);
    show(&abdul);
    display(abdul);
    return 0;
}
