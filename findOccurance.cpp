#include <iostream>
using namespace std;

int findOccurance(int *arr, int arrSize, int target);
int main() {
    int arrSize = 6;
    int arr[arrSize] = {1,1,2,5,6,10};
    int *iterator = arr;
    int target = 10;
    cout<<findOccurance(iterator, arrSize, target);

    return 0;
}
int findOccurance(int *arr, int arrSize, int target) {
    // if(arrSize == 1) {
    //     if(arr[0] == target) return 1;
    //     else return 0;
    // }else {
    //     if(arr[0] == target) return 1 + findOccurance(arr + 1, arrSize - 1, target);
    //     else return findOccurance(arr + 1, arrSize - 1, target);
    // }
    if(arrSize == 0) return 0;
    else {
        if(arr[0] == target) return 1 + findOccurance(arr + 1, arrSize - 1, target);
        else return findOccurance(arr + 1, arrSize - 1, target);
    }
}