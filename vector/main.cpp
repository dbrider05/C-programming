#include <iostream>
#include <vector>

using namespace std;

int main()
{
    //cout << "Hello world!" << endl;
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

    //traversing through a vector
    //method 1
    for(int i=0;i<v.size();i++){
        cout << v[i] << " ";
    }
    cout << endl;

    //method 2
    vector<int> :: iterator it;
    for(it=v.begin();it!=v.end();it++){
        cout << *it << " ";
    }
    cout << endl;

    //method 3
    for(auto element:v){
        cout << element << " ";
    }
    cout << endl;

    v.pop_back(); // delete last element

    vector<int> v2(3,50);
    // 50 50 50

    swap(v,v2);

    for(auto element:v) {
        cout << element << " ";
    }
    cout << endl;

    for(auto element:v2){
        cout << element << " ";
    }
    cout << endl;

    return 0;
}
