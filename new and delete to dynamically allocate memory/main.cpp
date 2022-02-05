#include <iostream>

using namespace std;

int main()
{
    int *pointer;
    pointer = new int; // new keyword returns memory address
    cout << pointer << endl;
    *pointer = 20;
    cout << *pointer << endl;
    delete pointer;
    cout << pointer;
    return 0;
}
