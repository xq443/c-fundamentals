#include <iostream>
using namespace std;
void f (int n);
int main() {
    f(3);
    return 0;
}

void f (int n) {
    if(n >  1) {
        cout<<"a";
        f(n / 2);
        cout<<"b";
        f(n / 2);
    }
    cout<<"c";
}