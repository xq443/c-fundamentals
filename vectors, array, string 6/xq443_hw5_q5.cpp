#include <iostream>
#include <cmath>
using namespace std;

void analyzeDividors(int num, int& outCountDivs, int& outSumDivs){
   for(int i = 2; i <= sqrt(num); i++){
       if(num % i == 0){
           // If num is not a perfect square
           if(num / i != i){
               outCountDivs += 2;
               outSumDivs += (i + (num / i));
           }
           // If num is a perfect square
           else{
               outCountDivs += 1;
               outSumDivs += i;
           }
       }
   }
}

bool isPerfect(int num) {
    int outCountDivs = 1, outSumDivs = 1; // 1 is the div of all numbers
    analyzeDividors(num, outCountDivs, outSumDivs);
    if(num == outSumDivs) {
        return true;
    }else {
        return false;
    }
}


int main() {
    int M;
    cout<<"Please enter a positive integer >= 2: ";
    cin>>M;

    cout << "Perfect numbers from 2 to M: ";
    for(int i = 2; i <= M; i++) {
        if(isPerfect(i)) {
            cout<<i<<" ";
        }
    }
    cout<<endl;

    
    cout<<"The pairs of amicable numbers between 2 and "<<M<<" are:"<<endl;
    int count;
    for(int i = 2; i <= M; i++){
        int sumNum1 = 1;
        // sumDivs of i
        analyzeDividors(i, count, sumNum1);
        if(sumNum1 > i && sumNum1 <= M) {
            int sumNum2 = 1;
            // sumDivs of sum1
            analyzeDividors(sumNum1, count, sumNum2);
            if(sumNum2 == i){
                cout<<sumNum2<<" "<<sumNum1<<endl;
            }
        }
    }
    return 0;
}