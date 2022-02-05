#include <iostream>

using namespace std;

int main()
{
    int *pointer;
    int input;
    cout << "enter the no of elements inserted in an array" << endl;
    cin >> input;
    //pointer = new int[input]; // creates extra memory to keep the data as intially created pointer can store only 4 bytes of memory or else it will create segmentation fault
    cout << "enter the elements of an array" << endl;

    for(int i = 0; i < input; i++) {
        cin >> *(pointer+i);
    }
    for(int i = 0; i < input; i++) {
        cout << *(pointer + i) << endl;
    }
    delete pointer;
    return 0;
}
