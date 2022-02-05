#include <iostream>

using namespace std;

int main()
{
    int *pointer = nullptr;
    pointer = new int;
    if(pointer != nullptr){
        cin >> *pointer;
        cout << *pointer << endl;
        delete pointer;
    }
    else {
        cout << "memory is not allocated" << endl;
    }
    return 0;
}
