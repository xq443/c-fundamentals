#include <iostream>
using namespace std;

int main() {
    int num, remainder, temp;
    int binary = 0;
    int p = 1; // 1 10 100 1000...

    cout<<"Enter decimal number: "<<endl;
    cin>>num;
    temp = num;

    while(num > 0) {
        remainder = num % 2;
        binary = binary + (remainder * p);
        num = num / 2;
        p *= 10;
    }

    num = temp;
    cout<<"The binary representation of "<<num<<" is "<<binary;

    return 0;
}