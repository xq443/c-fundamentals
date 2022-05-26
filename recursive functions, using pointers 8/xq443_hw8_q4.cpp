#include <iostream>
#include <algorithm>
using namespace std;
int lowestCost(int * arr, int curIdx, int arrSize);
int main() {
    int arrSize = 6;
    int curIdx = 0;
    int arr[arrSize] = {0,3,80,6,57,10};
    int res = lowestCost(arr, curIdx, arrSize);
    cout<<"The lowest cost is "<<res<<"."<<endl;
    
    return 0;
}

int lowestCost(int * arr, int curIdx, int arrSize) {
    if(curIdx == arrSize - 1) return 0;
    else if(curIdx == arrSize - 2) return arr[curIdx + 1];
    else {
        return min(lowestCost(arr, curIdx + 1, arrSize) + arr[curIdx + 1],
        lowestCost(arr, curIdx + 2, arrSize) + arr[curIdx + 2]);
    }
}