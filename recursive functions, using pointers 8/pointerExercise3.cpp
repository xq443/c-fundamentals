#include <iostream>
using namespace std;

int main() {
    int * A = new int[20];
    int * B = NULL;
    ++A;
    B = A--;
    ++B;
    cout<<B - A<<endl;
    return 0;
}