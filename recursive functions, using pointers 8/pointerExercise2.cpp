#include <iostream>
using namespace std;
int main() {
    char c = 'a';
    char * pc; //pc is a pointer
    pc = &c;
    cout<<*pc<<endl; //derefernece pointing to c
}

//pointer: 1. declare array 2. access the pointer to change the value of variable; passing the parameter
//          