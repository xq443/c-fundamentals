#include <iostream>
using namespace std;

int main() {
    int num; 
    cout<<"Please enter a positive integer: "<<endl;
    cin>>num;

    for(int k = 1; k <= num; k++ ){
        for(int i = k; i <= k * num; i += k) {
            cout<<i<<"\t";
        }
        cout<< endl;
    }  
    return 0;
}