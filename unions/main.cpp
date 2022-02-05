#include <iostream>
#include <string>

using namespace std;

union emp {
    int id;
    float salary;
}abdul, amaan;

int main()
{
    abdul.id = 1000;

    cout << abdul.id << endl;
    abdul.salary = 20000;
    cout<< abdul.id<< " " << abdul.salary << endl; //abdul.id prints garbage value
    cout << sizeof(abdul);
    return 0;
}
