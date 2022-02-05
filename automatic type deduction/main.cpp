#include <iostream>

using namespace std;

int sum(){
    return 20;
}

int main()
{
 //   auto age = 30; // auto keyword is useful when we return the funtion value
    auto age = sum(); // we can declare one variable with same name
    cout << age << endl;
    return 0;
}
