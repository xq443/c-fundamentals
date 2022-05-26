#include <iostream>
using namespace std;

int main() {
//section a
    cout<<"section a"<<endl;
    int num1, even1;
    int a = 1;

    cout<<"Please enter a positive number: "<<endl;
    cin>>num1;

    while(a <= num1) {
        even1 = 2 * a;
        cout<<even1<<endl;
        a++;
    }
    
//section b
    cout<<"section b"<<endl;
    int num2, even2;
    int b = 1;

    cout<<"Please enter a positive number: "<<endl;
    cin>>num2;
    
    for(int b = 1; b <= num2; b++) {
        even2 = 2 * b;
        cout<<even2<<endl;
    }
    return 0;
}




