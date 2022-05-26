#include <iostream>
using namespace std;
void printAsc(int start, int end);
int main() {
    printAsc(1,5);
    return 0;
}

void printAsc(int start, int end) {
    if(start == end) {
        cout<<start<<endl;
    }else {
        printAsc(start, end - 1);
        cout<<end<<endl;
    }
}