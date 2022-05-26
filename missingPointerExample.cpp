#include <iostream>
using namespace std;

int main() {
    int * p;
    int * container = new int[4];
    for(int i = 0; i < 4; i++) {
        container[i] = i + 10;
    }
    for(int i = 0; i  < 4; i++) {
        cout<<"container["<<i<<"] = "<<container[i]<<endl; //10, 11, 12, 13
    }
    p = container++;
    cout<< *p<<' '<<container[0]<<endl; //10 11
    p = ++container;
    cout<< *p<<' '<<container[1]<<endl; //
    return 0;
}