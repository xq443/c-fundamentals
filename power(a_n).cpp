#include <iostream>
using namespace std;


double recursionRes(double x, int n);
double recursionPower(double x, int n);

int main() {
    double x= 2.0;
    int n = 10;
    double res = recursionRes(x , n);
    cout<<res<<endl;

    
    return 0;
}

double recursionRes(double x, int n) {
    if(n < 0) return 1.0/recursionPower(x, math.abs(n));
    else return recursionPower(x, n);
}

double recursionPower(double x, int n) {
    if(n == 0) return 1;
    if(n == 1) return x;
    
    if(n % 2 == 0) return recursionPower(x * x, n /2);
    else return x * recursionPower(x * x, n /2);
}