#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Please enter an integer: "<<endl;
    cin>>n;

    int chars = 1, leadingSpace = n - 1;
    for(int row = 0; row <  2 * n - 1; row++) {
        for(int space = 0; space < leadingSpace; space++) {
            cout<<" ";
        }
        for(int ch = 0; ch < chars; ch++) {
            cout<<"*";
        }
        cout<<"\n";

        if(row < n - 1) {
            chars += 2;
            leadingSpace--;
        } else {
            chars -= 2;
            leadingSpace++;
        }
    }
    return 0;
}
/*
  *
 ***
*****
 ***
  *
 n = 3




*/