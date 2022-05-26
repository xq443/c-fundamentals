#include <iostream>
using namespace std;
int maxZeroLength(int nums[], int len, int startIdx);
int main() {
    int arr[6] = {0,0,1,0,0,0};
    int res = maxZeroLength(arr, 6, 0);
    cout<<res;
    return 0;
}

int maxZeroLength(int nums[], int len, int startIdx) {
    int endIdx = 1;
    startIdx = 0;
    while(endIdx < len) {
        for(int i = 0; i < len; i++) {
            if(nums[startIdx] == 0) {
                if(nums[endIdx] == 0) endIdx++;
                else startIdx = endIdx + 1;
                }
            }
        }  
    return endIdx - startIdx + 1;
}