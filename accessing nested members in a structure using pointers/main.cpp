#include <iostream>
#include <string>

using namespace std;

struct address {
    int houseno;
    string state, country;
};

struct student {
    string name;
    int rollno;
    address *addr;
};

int main()
{
    student abdul;
    student *abdulptr;
    abdulptr = &abdul;
    abdulptr -> name = "abdul";
    abdulptr -> rollno = 5;

    address adr = {210, "delhi", "India"};
    abdulptr -> addr = &adr;
    //abdul.addr = &adr;

    cout << abdul.name << " " << abdul.rollno << " " << abdul.addr->country << endl;

    return 0;
}
