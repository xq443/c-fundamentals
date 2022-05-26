#include <iostream>
using namespace std;
int factorial (int num);
int main() {
    int n, k, k_comb;
    int n_factorial, k_factorial, n_k_factorial;
    cout<<"Please enter an integer n and k: "<<endl;
    cin>>n>>k;

    n_factorial = factorial(n);
    k_factorial = factorial(k);
    n_k_factorial = factorial(n - k);

    k_comb = n_factorial / (k_factorial * n_k_factorial);

    cout<<n<<" choose "<<k<<" is ";
    cout<<k_comb<<endl;

    return 0;
}

int factorial (int num) {
    int factRes = 1;
    for(int i = 1; i <= num; i++) {
        factRes *= i;
    }
    return factRes;
}


