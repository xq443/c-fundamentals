#include<iostream>
using namespace std;
int main() {
    int n;
    int k = 0;

    cout<<"Enter a positive integer n : ";
    cin>>n;
    
    // Upper Half
    // *******
    //  *****
    //   ***
    //    *
    for(int i = 2 * n - 1 ; i >= 1; i -= 2){ // max length = 2 * n - 1; decrement by 2  
        for(int j = 1; j <= k; j++)
            cout<<" ";
        for(int j = 1; j <= i; j++)
            cout<<"*";
        cout << endl;
        k++;
    }
    
    // Lower Half
    //    *   
    //   ***  
    //  *****
    // *******
    k--;
    for(int i= 1; i <= 2 * n - 1; i += 2) {
        for(int j = 1; j <= k; j++)
            cout << " ";
        for(int j = 1; j <= i; j++)
            cout << "*";
        cout << endl;
        k--;
    }
    return 0;
}

