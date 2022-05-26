#include <iostream>
#include <string>
using namespace std;

int main() {
    int target;
    int m, d, c, l, x, v, i, n;
    cout << "Enter decimal number:"<<endl;
    cin >> target;

    cout<<target<<" is ";
    m = target / 1000;
    for (m ; m > 0; m--) cout << "M";
    d = ((target % 1000) / 500);
    for (d; d > 0; d--) cout << "D";

    c = ((target % 500) / 100);
    for (c; c > 0; c--) cout << "C";

    l = ((target % 100) / 50);
    for (l; l > 0; l--) cout << "L";

    x = ((target % 50) / 10);
    for (x; x > 0; x--) cout << "X";

    v = ((target % 10) / 5);
    for (v; v > 0; v--) cout << "V";

    i = (target % 5);
    for (i; i > 0; i--) cout << "I";
    
    return 0;

}