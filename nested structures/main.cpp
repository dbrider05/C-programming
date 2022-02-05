#include <iostream>

using namespace std;

struct address {
    int house_no;
    string state, country;
};

struct student {
    string name;
    int rollno;
    address addr = {210,"new delhi","India"};
};

int main()
{
    student s = {"abdul",5, {35, "los Angeles", "USA"} };
    cout << s.name << endl << s.rollno << endl << s.addr.country << endl;
    return 0;
}
