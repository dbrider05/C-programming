#include <iostream>
#include <string>

using namespace std;

class HumanBeing{
public:
    string name;
    void introduce(){
        cout << "Hello! I am " << name;
    }
};

int main()
{
    HumanBeing abdul = {"abdul"};
    abdul.introduce();
    return 0;
}
