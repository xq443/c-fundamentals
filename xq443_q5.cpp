#include <iostream>
using namespace std;
bool isSorted(int S[], int length);
int main() {
    int arrSize = 11;
    int arr[arrSize] = {69, 50, 33, 25, 23, 14, 5, 3, 0, -7, -9};
    if(isSorted(arr, arrSize)) {
        cout<<"The array is sorted in non-increasing order"<<endl;
    }else {
        cout<<"The array is NOT sorted in non-increasing order"<<endl;
    }
    return 0;
}
bool isSorted(int S[], int length){
    if(length == 1) return true;
    else{
        if(S[length - 2] >= S[length - 1]) {
            return isSorted(S, length - 1);
        }
        else return false;
    }
}