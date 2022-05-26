#include <iostream>
using namespace std;

/*

n = 2 -> 3 rows
 *
***
 *

n = 3 -> 5 rows
  *
 ***
*****
 ***
  *
1. how many rows do I need to print out? 2n - 1
2. how many leading spaces will be in each row? n - 1 on the top of the row, then increase by 1 until the second half of the diamond, then decrease by 1 until the last row.
3. how many chars at each row? staring at 1, and increment by 2 until the halfway point, and then decrement by 2 until the last row.

*/
int main() {
    int n;
    cout<<"Please enter an integer number: "<<endl;
    cin>>n;

    int chars = 1, leadingSpace = n - 1;
    for(int row = 0; row < 2 * n - 1; row++) {// iterate the number of rows
        for(int space = 0; space < leadingSpace; space++) {//print leading spaces
            cout<<' ';
        }
        for(int ch = 0; ch < chars; ch++) {// print chars
            cout<<'*';
        }
        cout<<'\n';

        if(row < n - 1) {
            chars += 2;
            --leadingSpace;
        } else {
            chars -= 2;
            ++leadingSpace;
        }
    }
    return 0;
}