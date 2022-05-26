#include <iostream>
using namespace std;
void printAsterisk(int n);
void printRuler_helper(int n);
void printTriangle(int n);
void printOpositeTriangles(int n);
void printRuler(int n);

int main() {
    printTriangle(4);
    cout<<endl;
    printOpositeTriangles(4);
    cout<<endl;
    printRuler(4);
    return 0;
}

void printTriangle(int n) {
    if(n == 1) printAsterisk(1);
    else {
        printTriangle(n - 1);
        printAsterisk(n);
    }
}
void printOpositeTriangles(int n) {
    if(n == 1) {
        printAsterisk(1);
        printAsterisk(1);
    }else {
        printAsterisk(n);
        printOpositeTriangles(n - 1);
        printAsterisk(n);
    }
}
void printRuler(int n) {
    if(n == 1) printRuler_helper(1);
    else{
        printRuler(n - 1);
        printRuler_helper(n);
        printRuler(n - 1);
    }
}

void printAsterisk(int n) {
    for(int i = 0; i < n; i++) {
            cout<<'*';
    }
    cout<<endl;
}
void printRuler_helper(int n) {
    for(int i = 0; i < n; i++){
        cout<<'-';
    }
    cout<<endl;
}