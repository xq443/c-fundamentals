#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v;
    for(int i = 0; i < 10; i++) {
        v.push_back(i * 10);
    }
    for(int i: v) { //vector allows to use the ranged for loop
        cout<<i<<endl;
    }
    cout<<v[6];
    return 0;
}