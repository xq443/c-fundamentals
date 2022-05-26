#include <iostream>
using namespace;

int main() {
    int num;

    cout<<"Please enter an integer: "<<endl;
    cin>>num;

    bool isPrime(int num) {
        int countDivs = 0;
        for(int i = 0; i < num / 2; i++) {
            if(num % i == 0) {
                countDivs++;
            }
            if(countDivs == 1) {
                return true;
            }else return false;
        }
    }


}