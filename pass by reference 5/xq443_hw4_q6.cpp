#include <iostream>

using namespace std;

int main() {
    int n;
    int evenCount, oddCount, temp, remainder;
    cout << "Enter a positive integer: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        evenCount = 0;
        oddCount = 0;
        temp = i;

        while(i > 0) {

            remainder = i % 10;
            if(remainder % 2 == 0) evenCount++;
            else oddCount++;
            i /= 10;
        }
        i = temp;
        if(oddCount < evenCount) 
            cout<< i <<endl;
    }
    return 0;
}

   
