#include <iostream>
using namespace std;

void printShiftedTriangle(int n, int m, char symbol);
void printPineTree(int triangleNum, char symbol);


int main() {
    int n, m;
    char symbol;
    cout<<"Please enter the number of lines in the tree: "<<endl;
    cin>>n;
    cout<<"Please enter the number of shifted spaces from the left margin: "<<endl;
    cin>>m;
    cout<<"Please enter the character filling the tree: "<<endl;
    cin>>symbol;

    printShiftedTriangle(n, m, symbol);
    cout<<endl;
    
    int triangleNum;
    cout<<"Please enter the number of triangles in the tree: "<<endl;
    cin>>triangleNum;
    cout<<"Please enter the character filling the tree: "<<endl;
    cin>>symbol;
    printPineTree(triangleNum, symbol);

    return 0;
    
}

void printShiftedTriangle(int n, int m, char symbol){
    int leadingSpace = m + n - 1; // decrement by 1;
    int ch = 1; // increment by 2;

    for(int row = 0; row < n; row++) {
        for(int space = 0; space < leadingSpace; space++) {
            cout<<' ';
        }
        for(int chars = 0; chars < ch; chars++) {
            cout<<symbol;
        }
        cout<<'\n';

        leadingSpace--;
        ch += 2;
    }
}

void printPineTree(int triangleNum , char symbol){
    for(int triangle = 1; triangle <= triangleNum; triangle++) {
        return printShiftedTriangle(triangle + 1, triangleNum - triangle , symbol);
    }
}
