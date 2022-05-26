#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Please enter an integer: "<<endl;
    cin>>n;
    int temp = n;
    int odds = 0, evens = 0;
    
    while(n > 0) {
        int remainder;
        remainder = n % 10;
        if(remainder % 2 == 0){
            evens++;
        } else {
            odds++;
        }
        n /= 10;
    }
    if(odds > evens) cout<<temp;

    return 0;
}