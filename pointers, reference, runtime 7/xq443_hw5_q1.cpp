#include <iostream>
using namespace std;


int fib(int& n);

int main() {
    int num;
    int res;
    cout<<"Please enter a positive integer: "<<endl;
    cin>>num;
    cout<<fib(num);
    return 0;
}

int fib(int& n) {
    int a = 0, b = 1;
    int sum;
    while(n > 1) {
        sum = a + b;
        a = b;
        b = sum;
        n--;
    }
    return sum;
}
//time complexity O(n)
//space complexiy O(1)