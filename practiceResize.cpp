#include <iostream>
using namespace std;

void resizeArray(int *& arr, int curSize, int newSize);
int main() {
    int arrSize = 5;
    int numAdded = 50;
    int * arr = new int[arrSize];
    for(int i = 0; i < arrSize; i++) {
        arr[i] = i * 10;
    }
    int newSize = arrSize * 2;
    resizeArray(arr, arrSize, newSize);
    arr[arrSize++] = numAdded;
    for(int i = 0; i < newSize; i++) {
        cout<<arr[i]<<" ";
    }
    return 0;
}

void resizeArray(int * &arr, int curSize, int newSize) {
    int * temp = new int[newSize];
    for(int i = 0; i < curSize; i++) {
        temp[i] = arr[i];
    }
    delete [] arr;
    arr = temp;
}