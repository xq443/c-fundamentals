#include <iostream>
using namespace std;

int main(){
    int x;
    int * ptx;
    x = 4;
    ptx = &x;

    cout<<x<<endl; //4
    cout<<ptx<<endl; //address of x: 0x7b9b3ffbd4
    cout<<*ptx<<endl; // 4 //dereference 
    cout<<&*ptx<<endl; //address of x: 0x7b9b3ffbd4

    *ptx = 5;
    cout<<x<<endl; //5
    cout<<ptx<<endl; //address of x: 0x7b9b3ffbd4
    cout<<*ptx<<endl; //5
    return 0;
}