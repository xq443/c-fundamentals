#include <iostream>
using namespace std;
int sumOfSquares(int arr[], int arrSize);
bool isSorted(int arr[], int arrSize);
int main() {
    int arrSize = 4;
    int arr[arrSize] = {2, -1, 3, 10};

    cout<<sumOfSquares(arr, arrSize)<<endl;
    if(isSorted(arr, arrSize) == true) cout<<"The array is sorted in an ascending order."<<endl;
    else cout<<"The array is NOT sorted in an ascending order."<<endl;
    return 0;
}

int sumOfSquares(int arr[], int arrSize) {
    if(arrSize == 0) return 0;
    else if(arrSize == 1) return arr[0] * arr[0];
    else {
        return sumOfSquares(arr, arrSize - 1) + arr[arrSize - 1] * arr[arrSize - 1];
    }
}
bool isSorted(int arr[], int arrSize) {
    if(arrSize == 0 || arrSize == 1) return true;
    // if(arrSize == 2) {
    //     if(arr[1] > arr[0]) return true;
    //     else return false;
    // }
    else {
        if(arr[arrSize - 1] > arr[arrSize - 2]) {
            return isSorted(arr, arrSize - 1);
        } else return false;
    }
}