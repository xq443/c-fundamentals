#include <iostream>
using namespace std;
int analyzeDigit(int num, int& outSum);

int main() {
    int num, countDigit, sumDigit;
    cout<<"Please enter a positive integer: "<<endl;
    cin>>num;
    countDigit = analyzeDigit(num, sumDigit);
    cout<<"The number has "<<countDigit<<" and their sum is "<<sumDigit;
    return 0;
}

int analyzeDigit(int num, int& outSum) {
    int count = 0, sum = 0;
    int curDigit;
    while(num > 0) {
        curDigit = num % 10;
        count++;
        sum += curDigit;
        num = num / 10;
    }
    outSum = sum;
    return count;
}
