#include<iostream>
#include<string>

using namespace std;

struct student{
    string name;
    int rollno;
}abdul, amaan;

int main()
{
    abdul = {"abdul", 5};
    amaan = {"amaan", 47};

    cout << abdul.name << " " << abdul.rollno << endl;
    cout << amaan.name << " " << amaan.rollno << endl;

    return 0;
}
